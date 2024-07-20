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
                temp = temp.substr(wordLen - 1) + temp.substr(0, wordLen - 1);
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
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}