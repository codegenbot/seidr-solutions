#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            if(wordLength >= 5) {
                for(int j = wordLength-1; j>=0; j--) {
                    result += str[i-j];
                }
            } else {
                result += str.substr(i-wordLength, wordLength);
            }
            wordLength = 0;
        } else {
            wordLength++;
        }
    }
    if(wordLength >= 5) {
        for(int i=wordLength-1; i>=0; i--) {
            result += str[i];
        }
    } else {
        result = str;
    }
    return result;
}

int main() {
    string input;
    while(getline(cin, input)) {
        cout << spinWords(input) << endl;
    }
    return 0;
}