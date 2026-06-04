#pragma once
#include <string>
#include "tool.h"

class calculatorTool : public Tool
{
public:
    void execute() override;
    std::string getName() override;
};
