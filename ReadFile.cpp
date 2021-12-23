//
// Created by Darya on 05.12.2021.
//

#include "ReadFile.h"

static BlockMaker <ReadFile> readfile("readfile");

std::list<std::string> ReadFile::execute(const std::list<std::string> &text) {
    if(args.size() < 1) {
        throw NumOfArgs("Incorrect amount of parameters");
    }
    std::ifstream in(*args.begin());
    if (!in.is_open()) {
        throw OpenFile("Cannot open in file");
    }
    std::list<std::string> newText;
    while(!in.eof()) {
        std::string line;
        std::getline(in, line);
        newText.push_back(line);
    }
    in.close();
    return newText;
}

BlockType ReadFile::getType() {
    return BlockType::IN;
}
