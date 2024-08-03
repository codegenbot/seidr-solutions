#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int length = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            if (length >= 5)
                for (int j = length - 1; j >= 0; j--)
                    result += str[i - j - 1];
            else
                result += str.substr(i - length, length);
            length = 0;
            if (i < str.length())
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
    if (!(cin >> ws).get()) break;
    getline(cin, s);
    cout << spinWords(s) << endl;
    return 0;
}