#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ') {
            result += str.substr(wordLength, i - wordLength);
            wordLength = i + 1;
        }
    }
    result += str.substr(wordLength);

    string reversedWord;
    for (int j = 0; j < result.length(); j++) {
        if (result[j] == ' ') {
            if (j > 4) {
                for (int k = j - 1; k >= j - 5; k--) {
                    reversedWord += result[k];
                }
                result.erase(j - 5, 5);
                j -= 5;
            } else {
                reversedWord += " ";
            }
        } else {
            if (j > 4) {
                for (int k = j - 1; k >= j - 5; k--) {
                    reversedWord += result[k];
                }
                result.erase(j - 5, 5);
                j -= 5;
            } else {
                reversedWord += result[j];
            }
        }
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