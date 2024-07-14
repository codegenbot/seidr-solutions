Here's the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) {
                    result += sentence[i - j];
                }
            } else {
                result += " ";
            }
            wordLength = 0;
        } else {
            wordLength++;
            result += sentence[i];
        }
    }
    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; i--) {
            result += sentence[wordLength - i - 1];
        }
    }
    return result;
}

int main() {
    string input;
    while (true) {
        cin >> input;
        cout << spinWords(input) << endl;
    }
    return 0;
}