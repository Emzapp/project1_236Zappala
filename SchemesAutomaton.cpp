#include "SchemesAutomaton.h"
#include <iostream>

void SchemesAutomaton::S0(const std::string& input) {
    if (input[index] == 'S') {
        index++;
        SchemesAutomaton::S1(input);
    } else {
        Serr();
    }
}

void SchemesAutomaton::S1(const std::string& input) {
    if (input[index] == 'c') {
        index++;
        SchemesAutomaton::S2(input);
    } else {
        Serr();
    }
}

void SchemesAutomaton::S2(const std::string& input) {
    if (input[index] == 'h') {
        index++;
        SchemesAutomaton::S3(input);
    } else {
        Serr();
    }
}

void SchemesAutomaton::S3(const std::string& input) {
    if (input[index] == 'e') {
        index++;
        SchemesAutomaton::S4(input);
    } else {
        Serr();
    }
}

void SchemesAutomaton::S4(const std::string& input) {
    if (input[index] == 'm') {
        index++;
        SchemesAutomaton::S5(input);
    } else {
        Serr();
    }
}

void SchemesAutomaton::S5(const std::string& input) {
    if (input[index] == 'e') {
        index++;
        SchemesAutomaton::S6(input);
    } else {
        Serr();
    }
}

void SchemesAutomaton::S6(const std::string& input) {
    if (input[index] == 's') {
        inputRead = 7;
    } else {
        Serr();
    }
}