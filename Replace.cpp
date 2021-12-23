//
// Created by Darya on 05.12.2021.
//

#include "Replace.h"

static BlockMaker <Replace> replace("replace");

std::list<std::string> Replace::execute(const std::list<std::string> &text) {
    if(args.size() < 2) {
        throw NumOfArgs("Incorrect amount of parameters");
    }
    std::list<std::string> newText;
    std::string word1 = args.front();
    std::string word2 = args.back();
    for (auto i : text) {
        newText.push_back(std::regex_replace(i, std::regex(word1), word2));
    }
    return newText;
}

BlockType Replace::getType() {
    return BlockType::INOUT;
}