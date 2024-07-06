#include <algorithm>
using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word.clear();
        } else {
            word += c;
        }
    }
    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;
    return result;