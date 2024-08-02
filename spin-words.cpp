#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += str.substr(i,1);
        } else if (str.length() - i <= 5 || isSpace(str[i+1])) {
            result += str.substr(i);
        } else {
            string word = str.substr(i);
            reverse(word.begin(),word.end());
            result += word + " ";
            i += word.length();
        }
    }
    return result;
}

bool isSpace(char c) {
    if(c == ' ')
        return true;
    return false;
}