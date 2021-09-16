#include "ColonAutomaton.h"

void ColonAutomaton::S0(const std::string& input) {
    if (input[index] == ':') {
        inputRead = 1;
        type=TokenType::COLON;
    }
    else if (input[index] == ',') {
        type = TokenType::COMMA;
        inputRead = 1;
    } else if (input[index] == '?') {
        type = TokenType::Q_MARK;
        inputRead = 1;
    } else if (input[index] == '.') {
        type = TokenType::PERIOD;
        inputRead = 1;
    } else if (input[index] == '(') {
        type = TokenType::LEFT_PAREN;
        inputRead = 1;
    } else if (input[index] == ')') {
        type = TokenType::RIGHT_PAREN;
        inputRead = 1;
    } else if (input[index] == ':') {
        type = TokenType::COLON;
        inputRead = 1;
    } else if (input[index] == '*') {
        type = TokenType::MULTIPLY;
        inputRead = 1;
    } else if (input[index] == '+') {
        type = TokenType::ADD;
        inputRead = 1;
    } else {
        Serr();
    }
}
