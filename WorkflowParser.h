//
// Created by Darya on 05.12.2021.
//

#ifndef LAB3_WORKFLOWPARSER_H
#define LAB3_WORKFLOWPARSER_H

#include <string>
#include <list>
#include <vector>
#include <istream>
#include <map>
#include <utility>
#include "BlockDescErr.h"

class WorkflowParser {
    std::string getNum(std::string &line);
    std::vector<std::string> getArgs(std::string &line);
    std::string getName(std::string &line);
public:
    std::map<std::string, std::vector<std::string>> getBlocks(std::istream &in);
};


#endif //LAB3_WORKFLOWPARSER_H
