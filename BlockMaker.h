//
// Created by Darya on 12.12.2021.
//

#ifndef LAB3_BLOCKMAKER_H
#define LAB3_BLOCKMAKER_H

#include "IBlockMaker.h"
#include "BlockFactory.h"

template <typename T>
class BlockMaker : public IBlockMaker {
public:
    virtual Block* Create() const {
        return new T;
    }
    BlockMaker (const std::string& key) {
        BlockFactory::getInstance().RegisterMaker(key, this);
    }
};

#endif //LAB3_BLOCKMAKER_H
