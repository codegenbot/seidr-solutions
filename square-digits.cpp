#include <vector>
#include <iostream>
#include <string>

string squareDigits(string input) {
    string output = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        int squared = digit * digit;
        output += to_string(squared);
    }
    return output;
}