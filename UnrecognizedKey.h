//
// Created by Darya on 24.12.2021.
//

#ifndef LAB3_UNRECOGNIZEDKEY_H
#define LAB3_UNRECOGNIZEDKEY_H

class UnrecognizedKey : public std::exception {
    std::string exc;
public:
    UnrecognizedKey(const std::string& err) : exc(err) {}
    const char* what() const noexcept override {
        return exc.c_str();
    }
};

#endif //LAB3_UNRECOGNIZEDKEY_H
