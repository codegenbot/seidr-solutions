Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            word += str[i];
        } else {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            result += word;
            word = "";
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    result += word;

    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence: ";
        cin >> str;
        cout << spinWords(str) << endl;
    }
    return 0;
}