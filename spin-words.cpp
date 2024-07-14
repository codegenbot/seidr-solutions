#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            wordLength = word.length();
            if (wordLength >= 5) {
                for (int j = wordLength - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            word = "";
        } else {
            word += str[i];
        }
    }
    
    return result;
}