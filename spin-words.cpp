#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int wordLength;
    bool inWord = false;
    char c;

    for (int i = 0; i <= input.length(); i++) {
        if (i == input.length()) {
            if (inWord) {
                output += c;
                inWord = false;
            }
            break;
        }

        c = input[i];

        if (c == ' ') {
            inWord = false;
        } else {
            if (!inWord) {
                wordLength = 0;
                inWord = true;
            }
            wordLength++;

            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) {
                    output += input[i - j];
                }
            } else {
                output += c;
            }
        }
    }

    return output;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    cin >> input;

    cout << spinWords(input) << endl;

    return 0;
}