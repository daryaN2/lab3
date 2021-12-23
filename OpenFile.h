//
// Created by Darya on 23.12.2021.
//

#ifndef LAB3_OPENFILE_H
#define LAB3_OPENFILE_H

class OpenFile : public std::exception {
    std::string exc;
public:
    OpenFile(const std::string& err) : exc(err) {}
    const char* what() const noexcept override {
        return exc.c_str();
    }
};

#endif //LAB3_OPENFILE_H
