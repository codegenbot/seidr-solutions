Here's the solution:

#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    int length = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    output += input[i - j];
                }
            } else {
                output += input.substr(i - length, length);
            }
            length = 0;
        } else {
            length++;
        }
    }
    if (length >= 5) {
        for (int i = length - 1; i >= 0; i--) {
            output += input[i];
        }
    } else {
        output += input;
    }
    return output;
}