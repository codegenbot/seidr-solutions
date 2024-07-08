
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string squareDigits(int number) {
    stringstream ss;
    while (number > 0) {
        int digit = number % 10;
        ss << setw(2) << setfill('0') << to_string(digit * digit);
        number /= 10;
    }
    return ss.str();
}