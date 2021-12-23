//
// Created by Darya on 05.12.2021.
//

#ifndef LAB3_DUMP_H
#define LAB3_DUMP_H

#include "Block.h"
#include "BlockMaker.h"

class Dump : public Block {
    std::list<std::string> execute (const std::list<std::string> &text) override;
    BlockType getType() override;
};


#endif //LAB3_DUMP_H
