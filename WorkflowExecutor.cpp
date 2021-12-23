//
// Created by Darya on 05.12.2021.
//

#include "WorkflowExecutor.h"

void WorkflowExecutor::executeWorkflow(std::istream &in) {
    WorkflowParser parser;
    auto blocks = parser.getBlocks(in);
    std::list<std::shared_ptr<Block>> blockObjects;
    std::string line;
    getline(in, line);
    std::string num, name;
    int pos1, pos2 = 0;
    while (1) {
        pos1 = line.find_first_not_of(" ->", pos2);
        pos2 = line.find_first_not_of(" ->", pos1);
        if (pos1 == std::string::npos) {
            break;
        }
        num = line.substr(pos1, pos2-pos1);
        auto it = blocks.find(num);
        if (it == blocks.end()) {
            throw WorkflowException("Unrecognized block number");
        }
        name = *it->second.begin();
        std::shared_ptr <Block> blockObject (BlockFactory::getInstance().Create(name));
        blockObject->getArgs(it->second);
        blockObjects.emplace_back(blockObject);
    }
    checkBlock(blockObjects);
    std::list<std::string> text;
    for(auto blockObject : blockObjects) {
        text = blockObject->execute(text);
    }
}

void WorkflowExecutor::checkBlock(std::list<std::shared_ptr<Block>> &blockObjects) const{
    auto it = blockObjects.cbegin();
    auto last = --blockObjects.cend();
    if((*it)->getType() != BlockType::IN) {
        throw WorkflowException("Not a readfile block at the beginning");
    }
    ++it;
    while(it != last) {
        if ((*it)->getType() != BlockType::INOUT) {
            throw WorkflowException("Incorrect order of the blocks");
        }
        ++it;
    }
    if((*last)->getType() != BlockType::OUT) {
        throw WorkflowException("Not a writefile block at the end");
    }
}

