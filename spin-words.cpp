#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(wordStart, i - wordStart);
            if (word.length() >= 5) {
                result += string(word.rbegin(), word.rend());
            } else {
                result += word;
            }
            if (i < str.length()) {
                result += " ";
            }
            wordStart = i + 1;
        }
    }
    return result;
}