#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] != ' ') {
            int j = i;
            while (j < str.length() && str[j] != ' ') {
                j++;
            }
            string word = str.substr(i, j - i);
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            i = j;
        } else {
            result += str[i];
            i++;
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