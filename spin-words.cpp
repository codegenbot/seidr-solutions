#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (c == ' ') {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            word = "";
            result += " "; // Add a space to the result
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; i--) {
            result += word[i];
        }
    } else {
        result += word;
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