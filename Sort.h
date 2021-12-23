//
// Created by Darya on 05.12.2021.
//

#ifndef LAB3_SORT_H
#define LAB3_SORT_H

#include "Block.h"
#include "BlockMaker.h"

class Sort : public Block {
    std::list<std::string> execute (const std::list<std::string> &text) override;

    BlockType getType() override;
};


#endif //LAB3_SORT_H
