#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = i - 1; j >= 0; j--) {
                    result += str[j];
                }
            } else {
                result += " ";
            }
            wordLength = 0;
        } else {
            result += str[i];
            wordLength++;
        }
    }
    if (wordLength >= 5) {
        for (int i = result.length() - 1; i >= 0; i--) {
            result += result[i];
        }
    }
    return result;
}