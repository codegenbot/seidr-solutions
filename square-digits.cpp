#include <string>

string squareDigits(string input) {
    string output = "";
    for(int i=0; i<input.length(); i++) {
        int num = input[i] - '0';
        output += to_string(num * num);
    }
    return output;
}