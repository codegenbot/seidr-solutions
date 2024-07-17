#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while(i < str.length()) {
        if(str[i] == ' ') {
            result += str.substr(i);
            i++;
        } else {
            int j = i;
            while(j < str.length() && str[j] != ' ') {
                j++;
            }
            string word = str.substr(i, j - i);
            if(word.length() >= 5) {
                string revWord = "";
                for(int k = word.length() - 1; k >= 0; k--) {
                    revWord += word[k];
                }
                result += revWord + " ";
            } else {
                result += word + " ";
            }
            i = j;
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    while(true) {
        cout << "Enter a sentence (or 'q' to quit): ";
        cin >> str;
        if(str == "q") break;
        cout << spinWords(str) << endl;
    }
    return 0;
}