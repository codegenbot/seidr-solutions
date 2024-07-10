Here's the solution:

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
                string reversedWord = "";
                for (int j = word.length() - 1; j >= 0; j--) {
                    reversedWord += word[j];
                }
                result += reversedWord + " ";
            } else {
                result += word + " ";
            }
            word = "";
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        string reversedWord = "";
        for (int j = word.length() - 1; j >= 0; j--) {
            reversedWord += word[j];
        }
        result += reversedWord;
    } else {
        result += word;
    }

    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;  // a
    cout << spinWords("this is a test") << endl;  // this is a test
    cout << spinWords("this is another test") << endl;  // this is rehtona test
    cout << spinWords("hi") << endl;  // hi

    return 0;
}