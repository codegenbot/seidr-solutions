#include <string>
using namespace std;

std::string squareDigits(std::string n) {
    std::string res = "";
    for (char c : n) {
        int digit = c - '0';
        res += to_string(digit * digit);
    }
    return res;
}