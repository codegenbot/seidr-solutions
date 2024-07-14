#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5)
                result += reverse(word) + " ";
            else
                result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5)
        result += reverse(word);
    else
        result += word;

    return result;
}

string reverse(string str) {
    string revStr = "";
    for (int i = str.length() - 1; i >= 0; i--)
        revStr += str[i];
    return revStr;
}