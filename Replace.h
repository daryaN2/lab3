//
// Created by Darya on 05.12.2021.
//

#ifndef LAB3_REPLACE_H
#define LAB3_REPLACE_H

#include "Block.h"
#include "BlockMaker.h"
#include <regex>

class Replace : public Block {
    std::list<std::string> execute (const std::list<std::string> &text) override;
    BlockType getType() override;
};


#endif //LAB3_REPLACE_H
