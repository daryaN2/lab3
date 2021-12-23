//
// Created by Darya on 24.12.2021.
//

#ifndef LAB3_BLOCKDESCERR_H
#define LAB3_BLOCKDESCERR_H

class BlockDescErr : public std::exception {
    std::string exc;
public:
    BlockDescErr(const std::string& err) : exc(err) {}
    const char* what() const noexcept override {
        return exc.c_str();
    }
};

#endif //LAB3_BLOCKDESCERR_H
