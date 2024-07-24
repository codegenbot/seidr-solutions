#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = " ";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(wordLength, i - wordLength);
            if (word.length() > 4) {
                result += reversedWord(word) + " ";
            } else {
                result += word + " ";
            }
            wordLength = i + 1;
        }
    }
    return result.substr(0, result.length() - 1);
}

string reversedWord(string str) {
    string result = "";
    for (int j = str.length() - 1; j >= 0; j--) {
        result += str[j];
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