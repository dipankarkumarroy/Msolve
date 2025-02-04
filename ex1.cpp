#include <iostream>
#include <iomanip>
#include "Msolve.hpp"
int main()
{
    
    std::cout << std::fixed << std::setprecision(10);
    std::cout << Msolve("fmin(x,-67)",-8.7) << '\n';

}
