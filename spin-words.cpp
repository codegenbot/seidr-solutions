#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;

    return result;
}