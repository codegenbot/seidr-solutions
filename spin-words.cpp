#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if (word.length() >= 5) {
                result += string(word.rbegin(), word.rend());
            } else {
                result += word;
            }
            if (i < str.length()) {
                result += " ";
            }
            start = i + 1;
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence (or 'q' to quit): ";
        cin >> str;
        if (str == "q") break;
        cout << spinWords(str) << endl;
    }
    return 0;
}