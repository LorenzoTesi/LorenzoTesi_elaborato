//
// Created by loren on 22/08/2024.
//
#include "Task.h"

Task::Task(const std::string& description) : description(description) {}

std::string Task::GetDescription() const {
    return description;
}

void Task::SetTime(std::string t){
    time = t;
}

std::string Task::WriteString() const {
    return GetDescription()+" [Da Fare]";
}
