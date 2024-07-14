Here is the solution:

#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (wordLength >= 5) {
                for (int j = i - 1; j >= 0; j--) {
                    result += str[j];
                }
                wordLength = 0;
            } else {
                result += " ";
            }
        } else {
            wordLength++;
            result += str[i];
        }
    }
    if (wordLength >= 5) {
        for (int i = str.length() - 1; i >= 0; i--) {
            result += str[i];
        }
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