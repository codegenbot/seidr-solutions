#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string squareDigits(int number) {
    ostringstream ss;
    while (number > 0) {
        int digit = number % 10;
        ss << to_string(digit * digit);
        number /= 10;
    }
    return ss.str();
}