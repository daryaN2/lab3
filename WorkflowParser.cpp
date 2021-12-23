//
// Created by Darya on 05.12.2021.
//

#include "WorkflowParser.h"

std::map<std::string, std::vector<std::string>> WorkflowParser::getBlocks(std::istream &in) {
    std::map<std::string, std::vector<std::string>> ret;
    std::string line;
    std::getline (in, line);
    if (line.find("desc") == std::string::npos) {
        throw BlockDescErr("No \"desc\" at the beginning of block description");
    }
    std::getline(in, line);
    while (line.find("csed") == std::string::npos) {
        if (in.eof()) {
            throw BlockDescErr("No \"csed\" at the end of block description");
        }
        std::string num;
        num = getNum(line);
        std::string name;
        name = getName(line);
        std::vector<std::string> nameArgs;
        nameArgs.emplace_back(name);
        nameArgs = getArgs(line);
        ret.emplace(num, nameArgs);
        std::getline(in, line);
    }

    return ret;
}

std::string WorkflowParser::getNum(std::string &line) {
    std::string num;
    int pos = line.find(' ');
    if (pos == std::string::npos) {
        throw BlockDescErr("No block number");
    }
    num = line.substr(0, pos);
    return num;
}

std::string WorkflowParser::getName(std::string &line) {
    std::string name;
    int pos1 = 0;
    pos1 = line.find_first_not_of("= ", pos1);
    int pos2 = line.find(' ', pos1);
    if (pos1 == std::string::npos) {
        throw BlockDescErr("No block name");
    }
    //name = line.substr(pos1, pos2-pos1);
    name.append(line, pos1, pos2-pos1);
    return name;
}

std::vector<std::string> WorkflowParser::getArgs(std::string &line) {
    std::vector<std::string> nameArgs;
    std::string args;
    int pos1, pos2 = 0;
    while (pos2 != std::string::npos) {
        pos1 = line.find_first_not_of("= ", pos2);
        pos2 = line.find(' ', pos1);
        //args = line.substr(pos1, pos2-pos1);
        args.append(line, pos1, pos2-pos1);
        nameArgs.emplace_back(args);
        args.erase();
    }
    return nameArgs;
}