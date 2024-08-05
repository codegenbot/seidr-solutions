#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string s) {
    string result = "";
    string word;
    
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--) {
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
    
    return result;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    cin >> input;
    cout << spinWords(input) << endl;
    return 0;
}