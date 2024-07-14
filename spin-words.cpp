#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                for (int j = word.length() - 1; j >= 0; j--) {
                    result += word[j];
                }
            } else {
                result += word;
            }
            word = "";
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        for (int i = word.length() - 1; i >= 0; i--) {
            result += word[i];
        }
    } else {
        result += word;
    }

    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;  // Should print: a
    cout << spinWords("this is a test") << endl;  // Should print: this is a test
    cout << spinWords("this is another test") << endl;  // Should print: this is rehtona test
    cout << spinWords("hi") << endl;  // Should print: hi

    return 0;
}