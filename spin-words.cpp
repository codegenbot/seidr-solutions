#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if (word.length() >= 5) {
                result += reversed(word) + " ";
            } else {
                result += word + " ";
            }
            start = i + 1;
        }
    }
    return result;
}

string reversed(string s) {
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}