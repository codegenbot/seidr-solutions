#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            length = 0;
        } else {
            length++;
            result += str[i];
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    result += str[i - j];
                }
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