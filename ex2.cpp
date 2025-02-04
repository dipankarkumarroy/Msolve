#include <iostream>
#include <iomanip>
#include "Msolve.hpp"
int main()
{
    std::string s;
    //s = "-2+4+{6+3+{fmax({fmax(3,4)},{fmin(3,4)})}}";
    //s="3.0000";
    std::cout << Msolve("-2+fsin({fcos(xy)})",2);
}
