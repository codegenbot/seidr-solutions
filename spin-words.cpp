#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string output = "";
    int wordLength;
    bool inWord = false;
    
    for (char c : str) {
        if (c == ' ') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
        } else {
            wordLength = strlen(&c) - 1; // subtract 1 because we're counting the current character
            if (wordLength >= 5) {
                for (int i = wordLength; i >= 0; --i) {
                    output += c - ' ' + '\0';
                }
            } else {
                output += c;
            }
        }
    }
    
    return output;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << "Spin words: " << spinWords(str) << endl;
    return 0;
}