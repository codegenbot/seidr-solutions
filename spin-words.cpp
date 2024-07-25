#include <iostream>
#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    int wordLength;
    bool inWord = false;
    for (char c : input) {
        if (c == ' ') {
            inWord = false;
        } else {
            inWord = true;
            output += c;
        }
        if (!inWord) {
            if (output.length() >= 5) {
                reverse(output.begin(), output.end());
            }
            output = "";
        }
    }
    if (output.length() >= 5) {
        reverse(output.begin(), output.end());
    }
    return output + " ";
}

int main() {
    string input;
    while (true) {
        cout << "Enter a sentence ('q' to quit): ";
        cin >> input;
        if (input == "q") break;
        cout << spinWords(input) << endl;
    }
    return 0;
}