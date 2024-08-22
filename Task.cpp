//
// Created by loren on 22/08/2024.
//
#include "Task.h"

Task::Task(const std::string& description) : description(description), completed(false) {}

std::string Task::GetDescription() const {
    return description;
}

bool Task::IsCompleted() const {
    return completed;
}

void Task::MarkCompleted() {
    completed = true;
}

std::string Task::ToString() const {
    return description + (completed ? " [Completata]" : " [Da fare]");
}