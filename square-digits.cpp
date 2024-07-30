#include <vector>
#include <iostream>
#include <string>

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}

int main() {
    // Read user's input
    std::cout << "Enter a positive integer: ";
    std::string input;
    std::cin >> input;

    // Process the input
    string result = squareDigits(input);

    // Print the result
    std::cout << "The square of each digit is: " << result << std::endl;

    return 0;
}