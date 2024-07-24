Here is the solution:

#include <iostream>
#include <string>

using namespace std;

string spinWords(string s) {
    string result = "";
    int wordStart = 0;
    
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            string word = s.substr(wordStart, i - wordStart);
            
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--)
                    result += word[j];
            } else
                result += word;
            
            if (i < s.length())
                result += ' ';
            
            wordStart = i + 1;
        }
    }
    
    return result;
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << spinWords(s) << endl;
    return 0;
}