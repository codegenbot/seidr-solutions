#include <string>
using namespace std;

string spinWords(string s) {
    string result = "";
    int wordLength = 0;
    for (char c : s) {
        if (c == ' ') {
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += s[wordLength - i - 1];
            } else {
                result += c;
            }
            wordLength = 0;
        } else {
            wordLength++;
            result += c;
        }
    }
    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += s[wordLength - i - 1];
    }
    return result;
}