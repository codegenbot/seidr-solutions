```c++
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                result += word;
                string reversedWord = word;
                reverse(reversedWord.begin(), reversedWord.end());
                result += " ";
                word = "";
            } else {
                result += word;
                result += " ";
                word = "";
            }
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        string reversedWord = word;
        reverse(reversedWord.begin(), reversedWord.end());
        result += reversedWord;
    } else {
        result += word;
    }

    return result;
}