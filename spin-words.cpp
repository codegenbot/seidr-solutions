#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += " ";
            wordLength = 0;
        } else {
            wordLength++;
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) {
                    result += str[i - j];
                }
            } else {
                result += str[i];
            }
        }
    }
    return result;
}