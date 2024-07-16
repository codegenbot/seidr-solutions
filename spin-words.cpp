#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        int j = 0;
        // find next space or end of string
        while (i < str.length() && str[i] != ' ') {
            i++;
            j++;
        }
        // get the word and check if it has more than 4 characters
        string word = str.substr(i - j, j);
        if (word.size() > 4) {
            // reverse the word
            string reversedWord;
            for (int k = word.size() - 1; k >= 0; k--) {
                reversedWord += word[k];
            }
            result += reversedWord + " ";
        } else {
            result += word + " ";
        }
    }
    return result.substr(0, result.length() - 1); // remove extra space at the end
}

int main() {
    cout << spinWords("Hello World") << endl;
    return 0;
}