
#include <vector>
#include <iostream>
#include <string>
using namespace std;

string squareDigits(int num) {
    string result = "";
    while (num > 0) {
        int digit = num % 10;
        result += to_string(digit * digit);
        num /= 10;
    }
    return result;
}