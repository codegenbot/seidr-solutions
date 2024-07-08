#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string squareDigits(int number) {
    stringstream ss;
    while (number > 0) {
        int digit = number % 10;
        ss << (digit * digit) + '0';
        number %= 10;
    }
    return ss.str();
}