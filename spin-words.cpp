#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength;
    string word;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += " ";
        } else {
            word += sentence[i];
            if (i == sentence.length() - 1 || sentence[i + 1] == ' ') {
                wordLength = word.length();
                if (wordLength >= 5)
                    for (int j = wordLength - 1; j >= 0; j--)
                        result += word[j];
                else
                    result += word;
                word = "";
            }
        }
    }
    return result;
}