#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string input) {
    string output = "";
    string word = "";

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + " ";
            word = "";
        } else {
            word += input[i];
        }
    }

    // last word
    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    output += word;

    return output;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a sentence ('' to stop): ";
        cin >> s;
        if (s == "") break;
        cout << spinWords(s) << endl;
    }
    return 0;
}