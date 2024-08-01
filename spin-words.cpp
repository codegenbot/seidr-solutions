#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }

    return result.substr(0, result.length() - 1);
}

int main() {
    string input;
    while (getline(cin, input)) {
        cout << spinWords(input) << endl;
    }
    return 0;
}