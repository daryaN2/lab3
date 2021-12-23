//
// Created by Darya on 24.12.2021.
//

#ifndef LAB3_WORKFLOWEXCEPTION_H
#define LAB3_WORKFLOWEXCEPTION_H

class WorkflowException : public std::exception {
    std::string exc;
public:
    WorkflowException(const std::string& err) : exc(err) {}
    const char* what() const noexcept override {
        return exc.c_str();
    }
};

#endif //LAB3_WORKFLOWEXCEPTION_H
