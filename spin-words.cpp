Here's the solution:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += " ";
        } else {
            int j = i;
            while (j < str.length() && str[j] != ' ') {
                j++;
            }
            string word = str.substr(i, j - i);
            if (word.length() >= 5) {
                string reversedWord = "";
                for (int k = word.length() - 1; k >= 0; k--) {
                    reversedWord += word[k];
                }
                result += reversedWord + " ";
            } else {
                result += word + " ";
            }
            i = j;
        }
    }
    return result;
}

int main() {
    string str;
    while (cin >> str) {
        cout << spinWords(str) << endl;
    }
    return 0;
}