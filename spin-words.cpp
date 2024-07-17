#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = i - 1; j >= i - wordLength - 1; j--) {
                    result += str[j];
                }
            } else {
                result += str.substr(i - wordLength, wordLength);
            }
            wordLength = 0;
        } else {
            wordLength++;
        }
    }
    if (wordLength >= 5) {
        for (int i = str.length() - 1; i >= str.length() - wordLength - 1; i--) {
            result += str[i];
        }
    } else {
        result += str;
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}