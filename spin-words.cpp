Here is the completed code:

#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordStart = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(wordStart, i - wordStart);
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            wordStart = i + 1;
        }
    }
    return result;
}