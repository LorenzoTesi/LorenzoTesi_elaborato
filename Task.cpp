//
// Created by loren on 22/08/2024.
//
#include "Task.h"

Task::Task(const std::string& description) : description(description), completed(false) {}

std::string Task::getDescription() const {
    return description;
}

bool Task::isCompleted() const {
    return completed;
}

void Task::markCompleted() {
    completed = true;
}

std::string Task::toString() const {
    return description + (completed ? " [Completata]" : " [Da fare]");
}