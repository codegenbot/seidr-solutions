#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += " ";
        } else {
            for (wordLength = i + 1; sentence[wordLength] != ' '; wordLength++);
            string word = sentence.substr(i, wordLength - i);
            if (word.length() >= 5) {
                string reversedWord = "";
                for (int j = word.length() - 1; j >= 0; j--) {
                    reversedWord += word[j];
                }
                result += reversedWord;
            } else {
                result += word;
            }
            i = wordLength - 1;
        }
    }
    return result;
}