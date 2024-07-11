#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            while (length > 5) {
                for (int j = i - 1; j >= i - length - 1; j--) {
                    result += str[j];
                }
                length = 0;
            }
            result += " ";
            length = 0;
        } else {
            length++;
        }
    }
    while (length > 5) {
        for (int j = i - 1; j >= i - length - 1; j--) {
            result += str[j];
        }
        length = 0;
        i--;
    }
    while (i > 0) {
        i--;
    }
    result += str;
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}