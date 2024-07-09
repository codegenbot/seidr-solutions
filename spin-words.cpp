#include <string>
using namespace std;

string spinWords(string s) {
    string result = "";
    int wordLength;
    string tempWord;
    
    for(int i=0; i<s.length();i++){
        if(s[i] != ' '){
            tempWord += s[i];
        }else{
            if(tempWord.length() >= 5){
                reverse(tempWord.begin(),tempWord.end());
            }
            result += tempWord + " ";
            tempWord = "";
        }
    }
    
    if(tempWord.length() >= 5){
        reverse(tempWord.begin(),tempWord.end());
    }
    result += tempWord;
    
    return result;
}