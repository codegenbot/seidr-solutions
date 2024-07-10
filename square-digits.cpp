#include <string>
using namespace std;

string squareDigits(string input) {
    long long num = stol(input);
    string result = "";
    while (num > 0) {
        long long digit = num % 10;
        result += to_string(digit * digit);
        num /= 10;
    }
    return result;
}