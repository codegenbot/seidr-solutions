#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += str.substr(length, i - length);
            length = i + 1;
        }
    }
    result += str.substr(length);

    string temp = "";
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ' || i >= result.find(' ') && i > 4) {
            temp += ' ';
        } else if (i < 5) {
            temp += result[i];
        } else {
            for (int j = i; j >= i - 5; j--) {
                temp += result[j];
            }
        }
    }

    return temp;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << spinWords(str) << endl;
    return 0;
}