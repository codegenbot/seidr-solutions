#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength;
    string word;
    
    for(int i=0; i<sentence.length(); i++) {
        if(sentence[i] == ' ') {
            result += sentence.substr(i-wordLength+1);
            wordLength = 0;
            result += " ";
        } else {
            word += sentence[i];
            wordLength++;
            
            if(wordLength >= 5) {
                string reversedWord = "";
                for(int j=wordLength-1; j>=0; j--) {
                    reversedWord += word[j];
                }
                result += reversedWord;
                word = "";
                wordLength = 0;
                result += " ";
            }
        }
    }
    
    if(wordLength >= 5) {
        string reversedWord = "";
        for(int j=wordLength-1; j>=0; j--) {
            reversedWord += word[j];
        }
        result += reversedWord;
    } else {
        result += word;
    }
    
    return result.substr(1);
}

int main() {
    // cout << spinWords("Hello World") << endl;
    return 0;
}