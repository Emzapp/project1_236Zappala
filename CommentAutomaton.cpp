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
            std::cout << "reading "<< input[index] << std::endl;
            CommentAutomaton::S2(input);
            std::cout << "going to state 2" << std::endl;
        } else {
            CommentAutomaton::S1(input);
            std::cout << "reading "<< input[index] << std::endl;
            std::cout << "going to state 1" << std::endl;
        }
    } else {
        Serr();
    }
}

void CommentAutomaton::S1(const std::string& input) {
    substring = "#";
    while(input[index]!='\n'){
        std::cout << "looking at " << input[index] << std::endl;
        substring.push_back(input[index]);
        index++;
        inputRead++;
    }
}

void CommentAutomaton::S2(const std::string& input) {
    substring = "#|";
    while((input[index]!='#')&(input[index+1]!='|')) {
        if(input[index]=='\n'){
            newLines++;
        }
        substring.push_back(input[index]);
        index++;
        inputRead++;
        std::cout << "looking at " << input[index] << " in state 2." << std::endl;
        if (index == input.size() - 1) {
            inputRead++;
            type = TokenType::UNDEFINED;
            break;
        }

    }
    substring.push_back('#');
    substring.push_back('|');
}


