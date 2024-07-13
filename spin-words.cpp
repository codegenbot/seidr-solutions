#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i - start);
            if (word.length() >= 5) {
                result += reverse(word) + " ";
            } else {
                result += word + " ";
            }
            start = i + 1;
        }
    }
    return result.substr(0, result.length() - 1);
}

string reverse(string str) {
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }
    return rev;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string: ";
        cin >> str;
        if (str == "exit") break;
        cout << spinWords(str) << endl;
    }
    return 0;
}