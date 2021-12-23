//
// Created by Darya on 05.12.2021.
//

#include "Dump.h"

static BlockMaker <Dump> dump("dump");

std::list<std::string> Dump::execute(const std::list<std::string> &text) {
    if (args.size() < 1) {
        throw NumOfArgs("Incorrect amount of parameters");
    }
    std::ofstream out(*args.begin(), std::ios::app);
    if (!out.is_open()) {
        throw OpenFile("Cannot open file");
    }
    for (auto i : text) {
        out << i << std::endl;
    }
    out.close();
    return text;
}

BlockType Dump::getType() {
    return BlockType::INOUT;
}