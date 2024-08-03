#include <string>
#include <iostream>

using namespace std;

string spinWords(string str) {
    string result = " ";
    int length = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (length >= 5)
                for (int j = length - 1; j >= 0; j--)
                    result += str.substr(i - length, length)[j];
            else
                result += str.substr(i - length, length);
            length = 0;
            result += " ";
        } else {
            length++;
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);
    cout << spinWords(s) << endl;
    return 0;
}