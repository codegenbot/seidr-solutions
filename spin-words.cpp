#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    
    for(int i=0; i < str.length(); i++) {
        if(i == str.length()) {
            string word = str.substr(wordStart, i-wordStart);
            
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            break;
        } else if (str[i] == ' ') {
            string word = str.substr(wordStart, i-wordStart);
            
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            
            result += word + " ";
            wordStart = i+1;
        }
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a string of one or more words (separated by spaces): ";
    getline(cin, str);

    string output = spinWords(str);
    
    cout << "Output: " << output << endl;

    return 0;
}