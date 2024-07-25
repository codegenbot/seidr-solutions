#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    int wordLength = 0;
    bool inWord = false;

    for (int i = 0; i <= input.length(); i++) {
        if (i == input.length() || input[i] == ' ') {
            if (inWord) {
                if (wordLength >= 5) {
                    reverse(output.begin(), output.end());
                }
                output += " ";
                wordLength = 0;
                inWord = false;
            }
        } else {
            output += input[i];
            wordLength++;
            inWord = true;
        }
    }

    return output.substr(1);
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}