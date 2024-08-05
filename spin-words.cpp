#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--)
                    result += sentence[i - j];
                result += ' ';
            } else
                result += ' ';
            wordLength = 0;
        } else {
            wordLength++;
            result += sentence[i];
        }
    }
    if (wordLength >= 5) {
        for (int j = wordLength - 1; j >= 0; j--)
            result += sentence[sentence.length() - j];
    }
    return result;
}