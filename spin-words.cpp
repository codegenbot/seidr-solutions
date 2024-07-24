#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string s) {
    string result = "";
    int length = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            length = 0;
            result += ' ';
        } else {
            length++;
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    result += s[i - j];
                }
            } else {
                result += s[i];
            }
        }
    }
    return result;
}

int main() {
    string input;
    while (cin >> input) {
        cout << spinWords(input) << endl;
    }
    return 0;
}