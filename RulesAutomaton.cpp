#include "RulesAutomaton.h"
#include <iostream>

void RulesAutomaton::S0(const std::string& input) {
    if (input[index] == 'R') {
        index++;
        RulesAutomaton::S1(input);
    } else {
        Serr();
    }
}

void RulesAutomaton::S1(const std::string& input) {
    if (input[index] == 'u') {
        index++;
        RulesAutomaton::S2(input);
    } else {
        Serr();
    }
}

void RulesAutomaton::S2(const std::string& input) {
    if (input[index] == 'l') {
        index++;
        RulesAutomaton::S3(input);
    } else {
        Serr();
    }
}

void RulesAutomaton::S3(const std::string& input) {
    if (input[index] == 'e') {
        index++;
        RulesAutomaton::S4(input);
    } else {
        Serr();
    }
}

void RulesAutomaton::S4(const std::string& input) {
    if (input[index] == 's') {
        inputRead = 5;
    } else {
        Serr();
    }
}