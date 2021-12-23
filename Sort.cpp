//
// Created by Darya on 05.12.2021.
//

#include "Sort.h"

static BlockMaker <Sort> sort("sort");

std::list<std::string> Sort::execute(const std::list<std::string> &text) {
    if(!args.empty()) {
        throw NumOfArgs("Incorrect amount of parameters");
    }
    std::list<std::string> newText = text;
    newText.sort();
    return newText;
}

BlockType Sort::getType() {
    return BlockType::INOUT;
}