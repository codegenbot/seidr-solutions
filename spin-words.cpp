Here is the solution:

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
        } else {
            len = i + 1;
            while (len > 4 && i < str.length()) {
                i++;
                len++;
            }
            if (i >= str.length() || len <= 5) {
                for (int j = len - 1; j >= 0; j--) {
                    result += str[i - j];
                }
                i--;
            } else {
                for (int j = i; j >= 0; j--) {
                    result += str[j];
                }
            }
        }
    }
    return result;
}

int main() {
    string input;
    while (getline(cin, input)) {
        cout << spinWords(input) << endl;
    }
    return 0;
}