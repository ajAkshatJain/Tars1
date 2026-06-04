#pragma once
#include "tool.h"

class chromeTool : public Tool
{
public:
    void execute() override;
    std::string getName() override;
};