#include <string>
#include <iostream>

using namespace std;

string reverseWord(string str) {
    string revWord;
    for (int j = str.length() - 1; j >= 0; j--)
        revWord += str[j];
    return revWord;
}

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                result += reverseWord(word) + " ";
                word = "";
            } else
                result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5)
        result += reverseWord(word) + " ";
    else
        result += word + " ";

    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}