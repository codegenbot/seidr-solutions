#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = i - 1; j >= i - wordLength - 1; j--) {
                    result += str[j];
                }
            } else {
                result += str.substr(i - wordLength, wordLength + 1);
            }
            wordLength = 0;
        } else {
            wordLength++;
        }
    }
    if (wordLength >= 5) {
        for (int j = str.length() - 1; j >= str.length() - wordLength - 1; j--) {
            result += str[j];
        }
    } else {
        result += str;
    }
    return result;
}