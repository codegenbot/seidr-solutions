#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (length >= 5) {
                for (int j = word.length() - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            word = "";
            length = 0;
        } else {
            word += str[i];
            length++;
        }
    }
    if (length >= 5) {
        for (int j = word.length() - 1; j >= 0; j--) {
            result += word[j];
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