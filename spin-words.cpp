#include <vector>
#include <iostream>
#include <string>

using namespace std;

string reverse(string str) {
    string reversedStr = "";
    for(int i=str.length()-1; i>=0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    
    for(int i=0; i<=str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            string word = str.substr(wordStart, i-wordStart);
            
            if(word.length() >= 5) {
                result += reverse(word) + " ";
            } else {
                result += word + " ";
            }
            
            wordStart = i+1;
        }
    }
    
    return result.substr(0, result.length()-1);
}

int main() {
    // Your code here
    return 0;
}