//
// Created by loren on 22/08/2024.
//

#ifndef TESILABORATORIO_TASK_H
#define TESILABORATORIO_TASK_H

#include <string>

class Task {
private:
    std::string description;
    bool completed;

public:
    Task(const std::string& description);

    std::string GetDescription() const;
    bool IsCompleted() const;
    void MarkCompleted();
    std::string WriteString() const;
    std::string GetState()const;


};


#endif //TESILABORATORIO_TASK_H


