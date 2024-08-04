#include <vector>
#include <iostream>
#include <string>

using namespace std;

std::string squareDigits(std::string input) {
    std::string output = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = (input[i] - '0'); // convert character to integer
        output += to_string(digit * digit); // square the digit and concatenate
    }
    return output;
}