#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLen;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ' || i == str.length()) {
            wordLen = i - result.length() - 1;
            if (wordLen >= 5) {
                string temp = result.substr(result.length() - wordLen, wordLen);
                reverse(temp.begin(), temp.end());
                result += temp;
            } else {
                result += result.substr(result.length() - wordLen, wordLen);
            }
            result += ' ';
        } else {
            result += str[i];
        }
    }
    return result;
}