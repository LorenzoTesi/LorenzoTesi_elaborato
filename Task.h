//
// Created by loren on 22/08/2024.
//

#ifndef TESILABORATORIO_TASK_H
#define TESILABORATORIO_TASK_H

#include <string>

class Task {
private:
    std::string description;
    std::string time;
public:
    Task(const std::string& description);

    std::string GetDescription() const;

    void SetTime(std::string time);

    std::string WriteString() const;

};


#endif //TESILABORATORIO_TASK_H


