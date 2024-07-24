#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordCount = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (wordCount >= 5) {
                for (int j = i-1; j >= wordCount-1; j--) {
                    result += str[j];
                }
            } else {
                result += str.substr(wordCount, i-wordCount);
            }
            wordCount = 0;
        } else {
            wordCount++;
        }
    }
    return result;
}