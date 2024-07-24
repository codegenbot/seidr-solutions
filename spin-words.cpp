#include <iostream>
#include <string>

string spinWords(string s) {
    string result = "";
    int length = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            if(length >= 5) {
                for(int j = length - 1; j >= 0; j--) {
                    result += s[i-j];
                }
            } else {
                result += s.substr(i-length, length);
            }
            result += " ";
            length = 0;
        } else {
            length++;
        }
    }
    if(length >= 5) {
        for(int j = length - 1; j >= 0; j--) {
            result += s[i-j];
        }
    } else {
        result += s.substr(0, length);
    }
    return result;
}

int main() {
    string s;
    while(true) {
        cin >> s;
        cout << spinWords(s) << endl;
    }
    return 0;
}