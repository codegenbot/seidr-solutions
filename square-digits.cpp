#include <string>
#include <vector>
using namespace std;

std::string squareDigits(std::string input) {
    string output;
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit*digit);
    }
    return output;