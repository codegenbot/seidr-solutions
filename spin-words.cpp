#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(wordStart, i - wordStart);
            if (word.length() >= 5) {
                result += word.substr(rev(word)) + " ";
            } else {
                result += word + " ";
            }
            wordStart = i + 1;
        }
    }
    return result.substr(0, result.length() - 1);
}

string rev(string str) {
    string result = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        result += str[i];
    }
    return result;
}