#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                vector<char> temp(word.begin(), word.end());
                reverse(temp.begin(), temp.end());
                result += string(temp.begin(), temp.end()) + " ";
                word = "";
            } else {
                result += word + " ";
                word = "";
            }
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        vector<char> temp(word.begin(), word.end());
        reverse(temp.begin(), temp.end());
        result += string(temp.begin(), temp.end());
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