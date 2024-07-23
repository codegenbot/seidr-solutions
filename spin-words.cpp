#include <iostream>
using namespace std;

string spinWords(const string& str) {
    string result = "";
    int i = 0;
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += " ";
            i++;
        } else if(i + 4 >= str.length() || str[i+4] != ' ') {
            for(int j = i; j < str.length() && str[j] != ' '; j++) {}
            string word = str.substr(i, j - i);
            int len = word.length();
            if(len > 4) {
                string revWord = "";
                for(int k = len-1; k >= 0; k--) {
                    revWord += word[k];
                }
                result += revWord;
            } else {
                result += word;
            }
            i = j + 1;
        } else {
            int j = i;
            while(j < str.length() && str[j] != ' ') j++;
            string word = str.substr(i, j - i);
            result += word;
            i = j + 1;
        }
    }
    return result;
}

int main() {
    // test cases
    cout << spinWords("a") << endl; 
    cout << spinWords("this is a test") << endl; 
    cout << spinWords("this is another test") << endl; 
    cout << spinWords("hi") << endl; 

    return 0;
}