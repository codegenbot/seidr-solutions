#include <iostream>
#include <iomanip>

int hours;
std::cin >> hours;
std::cin.ignore();
float onGround, rate, melt;
std::cin >> onGround >> rate >> melt;

std::cout << std::fixed << std::setprecision(10) << snowDay(hours, onGround, rate, melt) << std::endl;