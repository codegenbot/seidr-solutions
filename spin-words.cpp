#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == ' ') {
            result += str.substr(wordLength, i - wordLength) + " ";
            wordLength = i + 1;
        }
        else if (i == str.length()) {
            result += str.substr(wordLength);
        }
    }

    for (int i = 0; i < result.length(); i++) {
        if (result[i] != ' ') {
            int j = i;
            while (j < result.length() && result[j] != ' ') {
                j++;
            }
            string word = result.substr(i, j - i);
            if (word.length() >= 5) {
                for (int k = word.length() - 1; k >= 0; k--) {
                    result.replace(i, word.length(), 1 + word[k]);
                    i++;
                }
            }
            i = j;
        }
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}