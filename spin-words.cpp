#include <iostream>
#include <algorithm>
using namespace std;

string spinWords(string str) {
    string result = "";
    bool inWord = false;
    for (int i = 0; i <= str.length(); i++) {
        if (i < str.length()) {
            char c = str[i];
            if (!inWord && !isSpace(c)) {
                inWord = true;
            }
            if (inWord) {
                result += c;
                if (c == ' ') {
                    inWord = false;
                }
            } else if (isSpace(c)) {
                result += " ";
            }
        } else {
            if (inWord) {
                string word = result;
                reverse(word.begin(), word.end());
                if (word.length() >= 5) {
                    result = word + " ";
                } else {
                    result = word + " ";
                }
                inWord = false;
            }
            result += c;
        }
    }
    return result;
}

string spinWords(string str) {
    string result = "";
    bool inWord = false;
    for (int i = 0; i <= str.length(); i++) {
        if (i < str.length()) {
            char c = str[i];
            if (!inWord && !isSpace(c)) {
                inWord = true;
            }
            if (inWord) {
                result += c;
                if (c == ' ') {
                    inWord = false;
                }
            } else if (isSpace(c)) {
                result += " ";
            }
        } else {
            if (inWord) {
                string word = result;
                reverse(word.begin(), word.end());
                if (word.length() >= 5) {
                    result = word + " ";
                } else {
                    result = word + " ";
                }
                inWord = false;
            }
            result += c;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string of words: ";
    getline(cin, str);
    cout << "Spun result: " << spinWords(str) << endl;
    return 0;