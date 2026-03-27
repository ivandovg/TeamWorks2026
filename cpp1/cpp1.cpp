// cpp1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyTestCalc.h"

int main()
{
    std::cout << "Test Using Git!\n";
    MyTestCalc c1;
    std::cout << "\nMul(4, 7) = " << c1.Mul(4, 7) << std::endl;
    system("pause");
    return 0;
}
