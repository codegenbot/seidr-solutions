#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int length = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    result += str.substr(i - length, 1);
                }
            } else {
                result += str.substr(i - length, length);
            }
            length = 0;
            if (i != str.length()) {
                result += " ";
            }
        } else {
            length++;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}