#include "Lexer.h"
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
#include "QueriesAutomaton.h"
#include "SchemesAutomaton.h"
#include "FactsAutomaton.h"
#include "RulesAutomaton.h"
#include "IDAutomaton.h"
#include "StringAutomaton.h"
#include "CommentAutomaton.h"

Lexer::Lexer() {
    CreateAutomata();
}

Lexer::~Lexer() {
    // TODO: need to clean up the memory in `automata` and `tokens`
}

void Lexer::CreateAutomata() {
    automata.push_back(new ColonAutomaton());
    automata.push_back(new ColonDashAutomaton());
    automata.push_back(new QueriesAutomaton());
    automata.push_back(new SchemesAutomaton());
    automata.push_back(new FactsAutomaton());
    automata.push_back(new RulesAutomaton());
    automata.push_back(new IDAutomaton());
    automata.push_back(new StringAutomaton());
    automata.push_back(new CommentAutomaton());
    // TODO: Add the other needed automata here
}

void Lexer::Run(std::string& input) {

    int lineNumber = 1;

    Automaton* maxAutomaton = automata.at(0);
    // While there are more characters to tokenize
    while(input.size() > 0) {
        int maxRead = 0;
        // TODO: you need to handle whitespace in between tokens
        if (isspace(input.at(0))) {
            if(input.at(0)=='\n'){
                lineNumber++;
            }
            input.erase(0, 1);
        } else {

            // Here is the "Parallel" part of the algorithm
            //   Each automaton runs with the same input
            for (int i = 0; i < automata.size(); i++) {
                int inputRead = automata.at(i)->Start(input);
                if (inputRead > maxRead) {
                    maxRead = inputRead;
                    maxAutomaton = automata.at(i);
                }
            }
            // Here is the "Max" part of the algorithm
            if (maxRead > 0)
            {
                std::string subst = input.substr(0, maxRead);
                Token* newToken = maxAutomaton->CreateToken(subst,lineNumber);
                lineNumber = lineNumber + maxAutomaton->NewLinesRead();
                tokens.push_back(newToken);
            }
            // No automaton accepted input
            // Create single character undefined token
            else {

                maxRead = 1;
                std::string substr = input.substr(0,1);
                Token* newToken = new Token(TokenType::UNDEFINED, substr, lineNumber);
                tokens.push_back(newToken);
            }
            // Update `input` by removing characters read to create Token
            input.erase(0,maxRead);
        }
    }
    Token* endToken = new Token(TokenType::ENDOFFILE, "", lineNumber);
    tokens.push_back(endToken);

}

std::string Lexer::toString() const {
    std::ostringstream os;
    for (size_t i=0; i < tokens.size(); i++) {
        os << tokens.at(i)->toString() << "\n";
    }
    os << "Total Tokens = " << tokens.size();
    return os.str();
}
