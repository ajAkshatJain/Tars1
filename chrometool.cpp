#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <cstdlib>
#include "chromeTool.h"
using namespace std;

void chromeTool::execute()
{
    cout << "Going incognito";
    system("google chrome");

}
std::string chromeTool::getName()
{
    return "Chrome";
}