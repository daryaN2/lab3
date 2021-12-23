//
// Created by Darya on 05.12.2021.
//

#include "BlockFactory.h"

BlockFactory &BlockFactory::getInstance() {
    static BlockFactory factory;
    return factory;
}


void BlockFactory::RegisterMaker(const std::string &key, IBlockMaker *maker) {
    if (_makers.find(key) != _makers.end()) {
        throw TooManyMakers("Too many makers given");
    }
    _makers[key] = maker;
}

Block *BlockFactory::Create(std::string blockName) {
    auto i = _makers.find(blockName);
    if (i == _makers.end()) {
        throw UnrecognizedKey("Unrecognized block type");
    }
    return i->second->Create();
}