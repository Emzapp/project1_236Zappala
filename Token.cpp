#include "Token.h"
#include <iostream>

Token::Token(TokenType thetype, std::string thedescription, int line) {

    //initialize
    type = thetype;
    description = thedescription;
    lineNumber = line;
}


std::string Token::toString() const {
    std::ostringstream os;
    os << "(";
    if (type == TokenType::COLON) os << "COLON,\"";
    else if (type == TokenType::COLON_DASH) os << "COLON_DASH,\"";
    else if (type == TokenType::COMMA) os << "COMMA,\"";
    else if (type == TokenType::PERIOD) os << "PERIOD,\"";
    else if (type == TokenType::SCHEMES) os << "SCHEMES,\"";
    else if (type == TokenType::FACTS) os << "FACTS,\"";
    else if (type == TokenType::ID) os << "ID,\"";
    else if (type == TokenType::QUERIES) os << "QUERIES,\"";
    else if (type == TokenType::STRING) os << "STRING,\"";
    else if (type == TokenType::COMMENT) os << "COMMENT,\"";
    else if (type == TokenType::ENDOFFILE) os << "EOF,\"";
    else if (type == TokenType::LEFT_PAREN) os << "LEFT_PAREN,\"";
    else if (type == TokenType::RIGHT_PAREN) os << "RIGHT_PAREN,\"";
    else if (type == TokenType::Q_MARK) os << "Q_MARK,\"";
    else if (type == TokenType::UNDEFINED) os << "UNDEFINED,\"";
    else if (type == TokenType::MULTIPLY) os << "MULTIPLY,\"";
    else if (type == TokenType::ADD) os << "ADD,\"";
    else if (type == TokenType::RULES) os << "RULES,\"";

    os << description << "\"," << lineNumber << ")";

    return os.str();
}

