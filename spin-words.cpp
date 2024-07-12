#include <iostream>
#include <string>
using namespace std;

string spinWords(string str) {
    string result = "";
    int count = 0;
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            result += '\n';
            count = 0;
        } else {
            if (count++ < 5) {
                result += str[i];
            } else {
                while (count-- > 4) {
                    result += ' ';
                }
                for (int j = i; j >= i - count + 1; j--) {
                    result += str[j];
                }
            }
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence (or 'exit' to stop): ";
        cin >> str;
        if (str == "exit") break;
        cout << spinWords(str) << endl;
    }
    return 0;
}