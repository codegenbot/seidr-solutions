#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += str.substr(i, str.find(' ', i + 1) - i) + " ";
            i = str.find(' ', i + 1);
        } else if (i == str.length() - 1) {
            result += str.substr(i, str.length());
        } else {
            int j = i;
            while (j < str.length() && isalnum(str[j])) {
                j++;
            }
            if (j - i >= 5) {
                string word = str.substr(i, j - i);
                reverse(word.begin(), word.end());
                result += word + " ";
            } else {
                result += str.substr(i, j - i) + " ";
            }
            i = j;
        }
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string s;
    while (true) {
        cout << "Enter a sentence: ";
        cin >> s;
        cout << "Spin words: " << spinWords(s) << endl;
    }
    return 0;
}