#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    for (int i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == ' ') {
            string word = str.substr(wordStart, i - wordStart);
            if (word.size() >= 5) {
                result += string(word.rbegin(), word.rend());
            } else {
                result += word;
            }
            if (i < str.size()) {
                result += " ";
            }
            wordStart = i + 1;
        }
    }
    return result;
}

int main() {
    cout << spinWords("a") << endl;
    cout << spinWords("this is a test") << endl;
    cout << spinWords("this is another test") << endl;
    cout << spinWords("hi") << endl;
    return 0;
}