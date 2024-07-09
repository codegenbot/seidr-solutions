#include <string>

using namespace std;

std::string squareDigits(std::string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        int squared = digit * digit;
        output += to_string(squared);
    }
    return output;
}

int main() {
    return 0;
}