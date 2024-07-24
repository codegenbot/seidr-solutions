#include <string>
#include <algorithm>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (char c : str) {
        if (c != ' ') {
            word += c;
        } else {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    return result.substr(0, result.length() - 1);
}