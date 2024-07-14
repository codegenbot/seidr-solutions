#include <iostream>
#include <string>
using namespace std;

string spinWords(string input) {
    string output = "";
    string word = "";

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (c == ' ') {
            if (word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            output += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        reverse(word.begin(), word.end());
    }
    output += word;

    return output;
}

int main() {
    cout << spinWords("a") << endl; // a
    cout << spinWords("this is a test") << endl; // this is a test
    cout << spinWords("this is another test") << endl; // this is rehtona test
    cout << spinWords("hi") << endl; // hi
    return 0;
}