#include "StringAutomaton.h"
#include <iostream>
#include <fstream>
#include <string>

void StringAutomaton::S0(const std::string& input) {
    if (input[index]=='\'') {
        index++;
        inputRead++;
        substring="";
        StringAutomaton::S1(input);
    } else {
        Serr();
    }
}

void StringAutomaton::S1(const std::string& input) {

    if (index == input.size() - 1) {
        inputRead++;
        type = TokenType::UNDEFINED;
    } else {
        while (input[index] != '\'') {
            if (input[index] == '\n') {
                newLines++;
            }
            substring.push_back(input[index]);
            index++;
            inputRead++;
            if (input[index] == '\'') {
                index++;
                inputRead++;
                StringAutomaton::S2(input);
            }
        }
    }
}

void StringAutomaton::S2(const std::string& input){
    if(input[index]=='\'') {
        std::cout << "in the second state" << std::endl;
        substring.push_back(input[index]);
        index++;
        inputRead++;
        S1(input);

    }
}