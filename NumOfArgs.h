//
// Created by Darya on 23.12.2021.
//

#ifndef LAB3_NUMOFARGS_H
#define LAB3_NUMOFARGS_H

class NumOfArgs : public std::exception {
    std::string exc;
public:
    NumOfArgs(const std::string& err) : exc(err) {}
    const char* what() const noexcept override {
        return exc.c_str();
    }
};

#endif //LAB3_NUMOFARGS_H
