```c++
#include <string>
using namespace std;

string reverse(string s) {
    string r = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        r += s[i];
    }
    return r;
}

string spinWords(string str) {
    string output = "";
    int wordStart = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(wordStart, i - wordStart);
            if (word.length() >= 5) {
                output += reverse(word) + " ";
            } else {
                output += word + " ";
            }
            wordStart = i + 1;
        }
    }
    return output;
}