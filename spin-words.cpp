#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    size_t pos = 0;
    while (pos < str.length()) {
        size_t nextSpace = str.find(' ', pos);
        if (nextSpace == string::npos) {
            nextSpace = str.length();
        }
        string word = str.substr(pos, nextSpace - pos);
        if (word.length() >= 5) {
            reverse(word.begin(), word.end());
        }
        result += word + " ";
        pos = nextSpace + 1;
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    while (cin >> str) {
        cout << spinWords(str) << endl;
    }
    return 0;
}