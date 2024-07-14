#include <string>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int wordLength;
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] != ' '){
            if(i == sentence.length() -1 || sentence[i+1] == ' '){
                result += sentence.substr(i, wordLength = i + 1 - i);
                int k = 0;
                for(int j = wordLength - 1; j >= 0; --j) {
                    result += sentence[i+j];
                    k++;
                }
                result += " ";
                i += wordLength - 1;
            }
        } else {
            result += ' ';
        }
    }
    return result.substr(0,result.length() -1);
}