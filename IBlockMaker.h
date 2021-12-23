//
// Created by Darya on 12.12.2021.
//

#ifndef LAB3_IBLOCKMAKER_H
#define LAB3_IBLOCKMAKER_H

#include "Block.h"

class IBlockMaker {
public:
    virtual Block* Create() const = 0;
    virtual ~IBlockMaker() {}
};

#endif //LAB3_IBLOCKMAKER_H
