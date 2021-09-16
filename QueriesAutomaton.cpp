#include "QueriesAutomaton.h"
#include <iostream>

void QueriesAutomaton::S0(const std::string& input) {
    if (input[index] == 'Q') {
        index++;
        QueriesAutomaton::S1(input);
    } else {
        Serr();
    }
}

void QueriesAutomaton::S1(const std::string& input) {
    if (input[index] == 'u') {

        index++;
        QueriesAutomaton::S2(input);
    } else {
        Serr();
    }
}

void QueriesAutomaton::S2(const std::string& input) {
    if (input[index] == 'e') {

        index++;
        QueriesAutomaton::S3(input);
    } else {
        Serr();
    }
}

void QueriesAutomaton::S3(const std::string& input) {
    if (input[index] == 'r') {

        index++;
        QueriesAutomaton::S4(input);
    } else {
        Serr();
    }
}

void QueriesAutomaton::S4(const std::string& input) {
    if (input[index] == 'i') {

        index++;
        QueriesAutomaton::S5(input);
    } else {
        Serr();
    }
}

void QueriesAutomaton::S5(const std::string& input) {
    if (input[index] == 'e') {

        index++;
        QueriesAutomaton::S6(input);
    } else {
        Serr();
    }
}

void QueriesAutomaton::S6(const std::string& input) {
    if (input[index] == 's') {

        inputRead = 7;
    } else {
        Serr();
    }
}