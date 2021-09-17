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
            //std::cout << "going to state 2" << std::endl;
            CommentAutomaton::S2(input);

        } else {
            //std::cout << "going to state 1" << std::endl;
            CommentAutomaton::S1(input);


        }
    } else {
        Serr();
    }
}

void CommentAutomaton::S1(const std::string& input) {
    substring = "#";
    while(input[index]!='\n'){
        //std::cout << "looking at " << input[index] << std::endl;
        substring.push_back(input[index]);
        index++;
        inputRead++;
    }
}

void CommentAutomaton::S2(const std::string& input) {
    substring = "#|";
    bool run = true;
    while(run) {
        if (index == input.size()) {
            type = TokenType::UNDEFINED;
            break;
        }
        std::cout << "looking at " << input[index] << " in state 2." << std::endl;
        substring.push_back(input[index]);
        if(input[index]=='|'){
            //std::cout << "equal to |" << std::endl;
            if(input[index+1]=='#'){
                inputRead++;
                inputRead++;
                inputRead++;
                //std::cout << " here we found the end of a comment woot woot cool" << std::endl;
                break;
            }
        }
        if(input[index]=='\n'){
            std::cout << "found new line" << std::endl;
            newLines++;
        }
        index++;
        inputRead++;



    }
    substring.push_back('#');
    substring.push_back('|');
}


