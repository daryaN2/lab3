//
// Created by Darya on 24.12.2021.
//

#ifndef LAB3_TOOMANYMAKERS_H
#define LAB3_TOOMANYMAKERS_H

class TooManyMakers : public std::exception {
    std::string exc;
public:
    TooManyMakers(const std::string& err) : exc(err) {}
    const char* what() const noexcept override {
        return exc.c_str();
    }
};

#endif //LAB3_TOOMANYMAKERS_H
