#ifndef IDAUTOMATON_H
#define IDAUTOMATON_H

#include "Automaton.h"
#include <iostream>

class IDAutomaton : public Automaton
{
private:
    std::string substring;
public:
    IDAutomaton() : Automaton(TokenType::ID) {}  // Call the base constructor

    void S0(const std::string& input);
    void S1(const std::string& input);

};

#endif // FACTSAUTOMATON_H

