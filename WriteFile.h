//
// Created by Darya on 05.12.2021.
//

#ifndef LAB3_WRITEFILE_H
#define LAB3_WRITEFILE_H

#include "Block.h"
#include "BlockMaker.h"

class WriteFile : public Block {
public:
    std::list<std::string> execute (const std::list<std::string> &text) override;
    BlockType getType() override;
};


#endif //LAB3_WRITEFILE_H
