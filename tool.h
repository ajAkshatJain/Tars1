#pragma once
#include <string> 
class Tool
{
public:
    virtual void execute() = 0;
    virtual std::string getName() = 0;
};