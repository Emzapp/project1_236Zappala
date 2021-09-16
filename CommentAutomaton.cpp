#include "CommentAutomaton.h"
#include <iostream>
#include <fstream>
#include <string>

void CommentAutomaton::S0(const std::string& input) {
    if (input[index]=='#') {
        index++;
        inputRead++;
        substring = "";
        if (input[index] == '|') {
            index++;
            CommentAutomaton::S2(input);
        } else {
            CommentAutomaton::S1(input);
        }
    } else {
        Serr();
    }
}

void CommentAutomaton::S1(const std::string& input) {
    substring = "#";
    while(input[index]!='\n'){
            substring.push_back(input[index]);
            index++;
            inputRead++;
    }
}

void CommentAutomaton::S2(const std::string& input) {
    substring = "#|";
    while(input[index]!='#'&&input[index+1]!='|') {
        if(input[index]=='\n'){
            newLines++;
        }
        substring.push_back(input[index]);
        index++;
        inputRead++;
        if (index == input.size() - 1) {
            inputRead++;
            type = TokenType::UNDEFINED;
            break;
        }

    }
    substring.push_back('#');
    substring.push_back('|');
}


