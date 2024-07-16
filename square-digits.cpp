#include <string>

string squareDigits(string input) {
    string output = "";
    for(int i=0; i<input.length(); i++){
        int digit = input[i] - '0';
        int squaredDigit = digit * digit;
        char c = (char)(squaredDigit + '0');
        output += c;
    }
    return output;