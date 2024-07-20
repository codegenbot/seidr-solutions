#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (char c : str) {
        if (c != ' ') {
            word += c;
        } else {
            if (word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; --i) {
                    result += word[i];
                }
            } else {
                result += word;
            }
            word = "";
        }
    }

    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; --i) {
            result += word[i];
        }
    } else {
        result += word;
    }

    return result;
}

int main() {
    cout << spinWords("a") << endl;
    cout << spinWords("this is a test") << endl;
    cout << spinWords("this is another test") << endl;
    cout << spinWords("hi") << endl;
    return 0;
}