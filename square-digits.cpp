#include <iostream>
#include <string>
using namespace std;

string squareDigits(int number) {
    stringstream ss;
    while (number > 0) {
        int digit = number % 10;
        ss << to_string(digit * digit);
        number /= 10;
    }
    return ss.str();
}