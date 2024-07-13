#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength = 0;
    for (char c : sentence) {
        if (c == ' ') {
            if (wordLength >= 5) {
                for (int i = wordLength - 1; i >= 0; --i)
                    result += sentence[wordLength - i - 1];
            } else
                result += " ";
            wordLength = 0;
        } else {
            result += c;
            ++wordLength;
        }
    }
    if (wordLength >= 5) {
        for (int i = wordLength - 1; i >= 0; --i)
            result += sentence[wordLength - i - 1];
    }
    return result;
}