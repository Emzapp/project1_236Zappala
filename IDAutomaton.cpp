#include "IDAutomaton.h"
#include <iostream>
#include <fstream>
#include <string>

void IDAutomaton::S0(const std::string& input) {
    if (isalpha(input[index])) {
        index++;
        substring.push_back(input[index]);
        IDAutomaton::S1(input);
    } else {
        Serr();
    }
}

void IDAutomaton::S1(const std::string& input) {
    int numberReadThrough = 1;

    while(isalpha(input[index])| isdigit(input[index])){
        if(substring=="Queries"|substring=="Rules"|substring=="Facts"|substring=="Schemes"){
            Serr();
        } else {
            substring.push_back(input[index]);
            index++;
            numberReadThrough++;
        }
    }
    inputRead = numberReadThrough;
}
