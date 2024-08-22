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

    std::string getDescription() const;
    bool isCompleted() const;
    void markCompleted();

    std::string toString() const;

};


#endif //TESILABORATORIO_TASK_H
