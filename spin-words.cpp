#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            word = str.substr(i);
            if (word.length() >= 5)
                result += reverse(word) + " ";
            else
                result += word + " ";
        }
    }
    
    return result.substr(0, result.length() - 1);
}

string reverse(string s) {
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--)
        rev += s[i];
    return rev;
}