#ifndef STRINGAUTOMATON_H
#define STRINGAUTOMATON_H

#include "Automaton.h"
#include <iostream>

class StringAutomaton : public Automaton
{
private:
    std::string substring;
public:
    StringAutomaton() : Automaton(TokenType::STRING) {}  // Call the base constructor

    void S0(const std::string& input);
    void S1(const std::string& input);
    void S2(const std::string& input);

};

#endif // STRINGAUTOMATON_H

