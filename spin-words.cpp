#include <iostream>
using namespace std;

string spinWords(string sentence) {
    string result = "";
    int count = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += " ";
            count = 0;
        } else {
            count++;
            if (count >= 5) {
                for (int j = i; j >= i - count + 1; j--) {
                    result += sentence[j];
                }
                i -= count - 1;
            } else {
                result += sentence[i];
            }
        }
    }
    return result;
}

string spinWords(string sentence) {
    string reverseSentence = "";
    string word = "";
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (word.length() >= 5)
                for (int j = word.length()-1; j >= 0; j--)
                    reverseSentence += word[j];
            else
                reverseSentence += word;
            
            word = "";
            reverseSentence += " ";
        } 
        else 
            word += sentence[i];
    }
    
    if (word.length() >= 5)
        for (int j = word.length()-1; j >= 0; j--)
            reverseSentence += word[j];
    else
        reverseSentence += word;
    
    return reverseSentence;