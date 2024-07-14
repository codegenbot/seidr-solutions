#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string s) {
    string result = "";
    int wordLength = 0;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            if(wordLength >= 5) {
                for(int j = wordLength - 1; j >= 0; j--)
                    result += s[i-wordLength + j];
            } else
                result += s.substr(i-wordLength+1, i);
            wordLength = 0;
        } else {
            wordLength++;
        }
    }

    if(wordLength >= 5) {
        for(int j = wordLength - 1; j >= 0; j--)
            result += s[wordLength-j-1];
    } else
        result = s;

    return result;
}

int main() {
    string str;
    while(true) {
        cout << "Enter a string: ";
        cin >> str;
        cout << spinWords(str) << endl;
    }
    return 0;
}