#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int len;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += " ";
            continue;
        }
        len = 0;
        while ((i + len) < str.length() && str[i + len] != ' ') {
            len++;
        }
        string word = str.substr(i, len);
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word;
        i += len - 1;
    }
    return result;
}

int main() {
    cout << spinWords("this is a test") << endl;
    cout << spinWords("hi") << endl;
    cout << spinWords("this is another test") << endl;
    cout << spinWords("a") << endl;
    return 0;
}