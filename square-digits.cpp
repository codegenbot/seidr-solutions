#include <string>
using namespace std;

std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c - '0';
        int squared = digit * digit;
        output += to_string(squared);
    }
    return output; }

int main() {
    string input = "34";
    cout << squareDigits(input) << endl;
    return 0; }