#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int length = 0;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            length = 0;
            output += ' ';
        } else {
            length++;
            output += input[i];
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    output += input[i - j];
                }
            }
        }
    }
    return output;
}

int main() {
    string input;
    cout << "Enter the sentence: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}