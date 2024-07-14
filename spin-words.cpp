#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' ' || i == str.length() - 1){
            if(i >= 5 && wordLength > 4)
                for(int j = wordLength-1; j >= 0; j--)
                    result += str[i-j];
            else
                result += str.substr(i-wordLength+1, wordLength);
            wordLength = 0;
        }else{
            ++wordLength;
        }
    }
    
    return result;
}