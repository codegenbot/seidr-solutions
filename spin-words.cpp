#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    bool inWord = false;

    for (char c : str) {
        if (c == ' ') {
            inWord = false;
            if (!result.empty()) {
                wordLength = result.length();
                if (wordLength >= 5) {
                    for (int i = wordLength - 1; i >= 0; --i)
                        result += result[i];
                } else
                    result += result;
                result.clear();
            }
        } else {
            inWord = true;
            result += c;
        }

        if (!inWord && !result.empty()) {
            result = (wordLength = result.length(), wordLength >= 5 ? string(result.rbegin(), result.rend()) : result) + (inWord ? " " : "");
            result.clear();
        }
    }

    if (!result.empty()) {
        wordLength = result.length();
        result = (wordLength >= 5 ? string(result.rbegin(), result.rend()) : result) + (inWord ? " " : "");
    }

    return result;
}

int main() {
    string input;
    cin >> input;

    cout << spinWords(input);

    return 0;
}