#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLen;
    bool isWordStarted = false;

    for(int i = 0; i <= str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            wordLen = i - (isWordStarted ? 1 : 0);
            if(wordLen > 4) {
                for(int j = wordLen-1; j >= 0; j--) {
                    result += str[i-j-1];
                }
            } else {
                result += str.substr(isWordStarted ? 1 : 0, wordLen);
            }
            isWordStarted = false;
        } else {
            if(!isWordStarted) {
                isWordStarted = true;
            }
        }
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    cout << spinWords(str) << endl;
    return 0;
}