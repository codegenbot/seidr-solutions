#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    
    for(int i=0; i<str.length(); i++) {
        string word;
        
        if(i == str.length() - 1) {
            word = str.substr(wordStart, i-wordStart+1);
            
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            
            result += word + " ";
        } else if (str[i] == ' ') {
            word = str.substr(wordStart, i-wordStart);
            result += word + " ";
            wordStart = i+1;
        } else {
            word += str[i];
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