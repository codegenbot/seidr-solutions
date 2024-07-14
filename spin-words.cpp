#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int wordLength;
    bool inWord = false;
    
    for (char c : str) {
        if (c == ' ') {
            inWord = false;
            result += ' ';
        } else if (!inWord) {
            inWord = true;
            result += c;
        } else {
            if ((wordLength = (result.size() - 1)) >= 5) {
                reverse(result.begin() + 1, result.end());
            }
            result += c;
        }
    }
    
    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl; // "a"
    cout << spinWords("this is a test") << endl; // "this is a test"
    cout << spinWords("this is another test") << endl; // "this is rehtona test"
    cout << spinWords("hi") << endl; // "hi"

    return 0;
}