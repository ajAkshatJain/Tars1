#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <cstdlib>
#include "CalculatorTool.h"
using namespace std;

void calculatorTool::execute()
{
    system("calc");
}
std::string calculatorTool::getName()
{
    return "Calculator";
} 