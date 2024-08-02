#include <string>
#include <cctype>

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        if(std::isdigit(c)) {
            int digit = c - '0';
            output += to_string(digit * digit);
        }
    }
    return output;
}