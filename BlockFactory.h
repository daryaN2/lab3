//
// Created by Darya on 05.12.2021.
//

#ifndef LAB3_BLOCKFACTORY_H
#define LAB3_BLOCKFACTORY_H

#include "Block.h"
#include "IBlockMaker.h"
#include "WorkflowParser.h"
#include <map>

class BlockFactory {
    BlockFactory() = default;
    std::map<std::string, IBlockMaker*> _makers;
public:
    static BlockFactory& getInstance();
    Block* Create(std::string blockName);
    void RegisterMaker(const std::string& key, IBlockMaker* maker);
};


#endif //LAB3_BLOCKFACTORY_H
