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
            if(wordLen >= 5){
                temp = temp.substr(1) + temp[0];
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
    // Your code here
    return 0;
}