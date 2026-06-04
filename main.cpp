#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include "CalculatorTool.h"
#include "chromeTool.h"
#include <unordered_map>
using namespace std;

int main()
{
    std::unordered_map<std::string, Tool *> registry;
    registry["calculator"] = new calculatorTool();
    registry["chrome"] = new chromeTool();
    string cmd;
    cout << "What can i do for yaa" ;
    cin >> cmd;
    registry[cmd]->execute();
    return 0;
}