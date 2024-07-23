```c++
#include <string>
using namespace std;

string squareDigits(int n) {
    string str = to_string(n);
    string result;
    for (char c : str) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    std::ostringstream oss;
    for (char c : str) {
        int digit = c - '0';
        oss << digit * digit;
    }
    return oss.str();