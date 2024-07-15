#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;

    string result = squareDigits(input);

    return 0;

}

std::string squareDigits(std::string input) {
    std::stringstream output;
    for (char c : input) {
        int digit = c - '0';
        output << to_string(digit * digit);
    }
    return output.str();
}