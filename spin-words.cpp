Here is the solution:

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
                for (int j = i - 1; j >= i - wordLength; j--) {
                    result += str[j];
                }
            } else {
                result += str.substr(i - wordLength, wordLength);
            }
            result += " ";
            wordLength = 0;
        } else {
            wordLength++;
        }
    }
    if (wordLength >= 5) {
        for (int j = str.length() - 1; j >= str.length() - wordLength; j--) {
            result += str[j];
        }
    } else {
        result += str.substr(str.length() - wordLength, wordLength);
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