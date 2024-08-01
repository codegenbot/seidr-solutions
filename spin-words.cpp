#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string s) {
    string result = "";
    string word = "";
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            if(word.length() >= 5) {
                for(int j = word.length()-1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            word = "";
        } else {
            word += s[i];
        }
    }
    
    if(word.length() >= 5) {
        for(int j = word.length()-1; j >= 0; j--) {
            result += word[j];
        }
    } else {
        result += word;
    }
    
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << spinWords(s);
    return 0;
}