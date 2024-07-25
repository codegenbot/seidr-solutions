#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(wordStart, i - wordStart);
            if (word.length() >= 5) {
                result += (reverse(word)) + " ";
            } else {
                result += word + " ";
            }
            wordStart = i + 1;
        }
    }
    return result;
}

string reverse(string str) {
    string revStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        revStr += str[i];
    }
    return revStr;
}