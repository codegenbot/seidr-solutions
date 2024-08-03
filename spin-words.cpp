#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            wordLength = i - result.length();
            
            if (wordLength >= 5) {
                string reversedWord = "";
                
                for (int j = wordLength - 1; j >= 0; j--) {
                    reversedWord += str[result.length() + j];
                }
                
                result += reversedWord;
            } else {
                result += str.substr(result.length(), wordLength);
            }
            
            if (i < str.length()) {
                result += ' ';
            }
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