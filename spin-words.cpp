#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }
    
    result += word;
    
    int j = 0;
    string tempWord;
    
    while (j < result.length()) {
        if (result[j] != ' ' || j == 0) {
            tempWord += result[j];
        } else {
            if (tempWord.length() >= 5) {
                for (int k = tempWord.length() - 1; k >= 0; k--) {
                    cout << tempWord[k];
                }
            } else {
                cout << tempWord;
            }
            tempWord = "";
        }
        j++;
    }
    
    if (tempWord.length() >= 5) {
        for (int k = tempWord.length() - 1; k >= 0; k--) {
            cout << tempWord[k];
        }
    } else {
        cout << tempWord;
    }
    
    return result;
}