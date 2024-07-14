#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string s) {
    string result = "";
    int wordLength;
    
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ' || i == s.length()) {
            wordLength = i - (result.size() ? 1 : 0);
            
            if (wordLength >= 5) {
                string reversedWord = "";
                
                for (int j = wordLength - 1; j >= 0; j--) {
                    reversedWord += s[i - wordLength + j];
                }
                
                result.append(reversedWord).append(' ');
            } else {
                result.append(s.substr(i - wordLength, wordLength)).append(' ');
            }
        }
    }
    
    return result.trim();
}

int main() {
    string input;
    cout << "Enter the string: ";
    getline(cin, input);
    cout << spinWords(input) << endl;
    return 0;
}