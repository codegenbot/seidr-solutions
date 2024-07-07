#include <string>
#include <iostream>
using namespace std;

string squareDigits(int number) {
    string result = "";
    while (number > 0) {
        int digit = number % 10;
        result = std::to_string(digit * digit) + result;
        number /= 10;
    }
    return result;
}