#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength;
    char tempChar;
    for(int i=0; i<sentence.length(); i++) {
        if(sentence[i] == ' ') {
            result += " ";
        }
        else if(i > 0 && (sentence[i-1] == ' ' || sentence[i-1] == '\0')) {
            wordLength = i - (i>0);
            for(int j=i; j>=wordLength; j--) {
                tempChar = sentence[j];
                sentence[j] = sentence[wordLength-1-j+i];
                sentence[wordLength-1-j+i] = tempChar;
            }
        }
    }
    return sentence;
}