#include <iostream>
#include <string>
using namespace std;

string spinWords(string s) {
    string result = "";
    int wordLength;
    string word;

    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || s[i] == ' ') {
            if ((word.length()) >= 5) {
                for (int j = word.length(); j >= 0; j--)
                    result += word[j];
            } else
                result += word;
            word = "";
        } else
            word += s[i];
    }
    return result;
}

int main() {
    string str1 = "a";
    cout << spinWords(str1) << endl;

    str1 = "this is a test";
    cout << spinWords(str1) << endl;

    str1 = "this is another test";
    cout << spinWords(str1) << endl;

    str1 = "hi";
    cout << spinWords(str1) << endl;
    
    return 0;
}