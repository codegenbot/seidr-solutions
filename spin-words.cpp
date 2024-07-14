#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) == string::npos || str.length() - i <= 5) {
            result += str.substr(i);
            break;
        }
        int j = str.find(" ", i);
        string word = str.substr(i, j - i);
        if (word.length() >= 5)
            result += reverse(word) + " ";
        else
            result += word + " ";
        i = j + 1;
    }
    return result;
}

string reverse(string str) {
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--)
        rev += str[i];
    return rev;
}