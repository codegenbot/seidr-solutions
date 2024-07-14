#include <vector>
#include <iostream>
#include <string>

using namespace std;

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
    return result.substr(0, result.length()-1); // remove the extra space at the end
}

string reverse(string str) {
    string reversed = "";
    for(int i=str.length()-1; i>=0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    cout << spinWords("a") << endl;
    cout << spinWords("this is a test") << endl;
    cout << spinWords("this is another test") << endl;
    cout << spinWords("hi") << endl;
    return 0;
}