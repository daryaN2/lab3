//
// Created by Darya on 05.12.2021.
//

#ifndef LAB3_BLOCK_H
#define LAB3_BLOCK_H

#include <string>
#include <list>
#include<vector>
#include <fstream>
#include "NumOfArgs.h"
#include "OpenFile.h"
#include "TooManyMakers.h"
#include "UnrecognizedKey.h"

enum class BlockType {
    IN,
    OUT,
    INOUT
};

class Block {
protected:
    std::vector<std::string> args;
public:
    virtual std::list<std::string> execute (const std::list<std::string> &text) = 0;
    void getArgs(const std::vector<std::string> &args) {
        this->args = args;
        this->args.erase(this->args.begin());
    }
    virtual BlockType getType() = 0;
    virtual ~Block() {}
};


#endif //LAB3_BLOCK_H
