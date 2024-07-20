#include <vector>
#include <iostream>
#include <string>

using namespace std;

string rev(string s) {
    string t = "";
    for (int i = 0; i < s.length(); i++) {
        t = s[i] + t;
    }
    return t;
}

string spinWords(string str) {
    string result = "";
    int wordLen;
    string temp;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            wordLen = temp.length();
            if (wordLen >= 5) {
                temp = temp.substr(temp.length() - 1) + temp.substr(0, temp.length() - 1);
            }
            result += temp + " ";
            temp = "";
        } else {
            temp += str[i];
        }
    }
    
    return result;
}

int main() {
    string input;
    cout << "Enter a string of words: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}