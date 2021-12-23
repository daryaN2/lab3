//
// Created by Darya on 05.12.2021.
//

#include "WriteFile.h"

static BlockMaker <WriteFile> writefile("writefile");

std::list<std::string> WriteFile::execute(const std::list<std::string> &text) {
    if(args.size() < 1) {
        throw NumOfArgs("Incorrect amount of parameters");
    }
    std::ofstream out(*args.begin());
    if (!out.is_open()) {
        throw OpenFile("Cannot open out file");
    }
    for (const auto &i : text) {
        out << i << std::endl;
    }
    out.close();
    return text;
}

BlockType WriteFile::getType() {
    return BlockType::OUT;
}
