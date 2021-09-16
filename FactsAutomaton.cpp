#include "FactsAutomaton.h"
#include <iostream>

void FactsAutomaton::S0(const std::string& input) {
    if (input[index] == 'F') {
        index++;
        FactsAutomaton::S1(input);
    } else {
        Serr();
    }
}

void FactsAutomaton::S1(const std::string& input) {
    if (input[index] == 'a') {
        index++;
        FactsAutomaton::S2(input);
    } else {
        Serr();
    }
}

void FactsAutomaton::S2(const std::string& input) {
    if (input[index] == 'c') {
        index++;
        FactsAutomaton::S3(input);
    } else {
        Serr();
    }
}

void FactsAutomaton::S3(const std::string& input) {
    if (input[index] == 't') {
        index++;
        FactsAutomaton::S4(input);
    } else {
        Serr();
    }
}

void FactsAutomaton::S4(const std::string& input) {
    if (input[index] == 's') {
        inputRead = 5;
    } else {
        Serr();
    }
}