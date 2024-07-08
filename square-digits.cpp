#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string squareDigits(int number) {
    string result;
    while (number > 0) {
        int digit = number % 10;
        result += to_string((digit * digit) % 10);
        number /= 10;
    }
    return result;
}