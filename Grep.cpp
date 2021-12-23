//
// Created by Darya on 05.12.2021.
//

#include "Grep.h"

static BlockMaker <Grep> grep("grep");

std::list<std::string> Grep::execute(const std::list<std::string> &text) {
    if(args.size() < 1) {
        throw NumOfArgs("Incorrect amount of parameters");
    }
    std::list<std::string> newText;
    std::string word = *args.begin();
    for (const auto &i : text) {
        if (i.find(word) != std::string::npos) {
            newText.push_back(i);
        }
    }
    return newText;
}


BlockType Grep::getType() {
    return BlockType::INOUT;
}