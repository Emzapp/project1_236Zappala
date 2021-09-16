#include "Lexer.h"
#include <fstream>
#include <iostream>



int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "please provide input files";
        return 1;
    }
    std::ifstream in(argv[1]);
    if (!in) {
        std::cerr << "unable to open " << argv[1] << " for input";
        return 2;
    }

    std::string theString = std::string((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
    Lexer* lexer = new Lexer();
    lexer->Run(theString);
    std::cout << lexer->toString();

    delete lexer;

    return 0;
}