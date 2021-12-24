//
// Created by Darya on 05.12.2021.
//

#ifndef LAB3_WORKFLOWPARSER_H
#define LAB3_WORKFLOWPARSER_H

#include <string>
#include <list>
#include <vector>
#include <fstream>
#include <map>
#include <utility>
#include "BlockDescErr.h"

class WorkflowParser {
    std::string getNum(std::string &line, int& pos1);
    std::vector<std::string> getArgs(std::string &line, int& pos1, int& pos2, std::vector<std::string>& nameArgs);
    std::string getName(std::string &line, int& pos1, int& pos2);
public:
    std::map<std::string, std::vector<std::string>> getBlocks(std::ifstream &in);
};


#endif //LAB3_WORKFLOWPARSER_H
