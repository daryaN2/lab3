//
// Created by Darya on 05.12.2021.
//

#ifndef LAB3_WORKFLOWEXECUTOR_H
#define LAB3_WORKFLOWEXECUTOR_H

#include <istream>
#include <iostream>
#include <memory>
#include "WorkflowParser.h"
#include "Block.h"
#include "BlockFactory.h"
#include <algorithm>
#include "WorkflowException.h"

class WorkflowExecutor {
    void checkBlock(std::list<std::shared_ptr<Block>> &blockObjects) const;
public:
    void executeWorkflow(std::istream &in/*char* in*/);
};


#endif //LAB3_WORKFLOWEXECUTOR_H
