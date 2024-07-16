#include <iostream>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        int j = 0;
        while (i < str.length() && str[i] != ' ') {
            i++;
            j++;
        }
        string word = str.substr(i - j, j);
        if (word.length() >= 5) {
            for (int k = word.length() - 1; k >= 0; k--) {
                result += word[k];
            }
        } else {
            result += word;
        }
        i++;
    }
    return result;
}

int main() {
    cout << spinWords("Hello World") << endl;
    return 0;
}