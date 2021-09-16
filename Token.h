#ifndef TOKEN_H
#define TOKEN_H
#include <string>
#include <sstream>

enum class TokenType {
    COLON,
    COLON_DASH,
    COMMA,
    PERIOD,
    Q_MARK,
    LEFT_PAREN,
    RIGHT_PAREN,
    MULTIPLY,
    ADD,
    SCHEMES,
    FACTS,
    RULES,
    QUERIES,
    ID,
    STRING,
    COMMENT,
    ENDOFFILE,
    UNDEFINED
};

class Token
{
private:
    // TODO: add member variables for information needed by Token
    TokenType type;
    std::string description;
    int lineNumber;

public:
    Token(TokenType thetype, std::string thedescription, int line);

    std::string toString() const;



    // TODO: add other needed methods
};

#endif // TOKEN_H

