#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            word += str[i];
        } else {
            if (word.length() >= 5) {
                string revWord = word;
                reverse(revWord.begin(), revWord.end());
                result += revWord + " ";
            } else {
                result += word + " ";
            }
            word = "";
        }
    }
    
    if (word.length() >= 5) {
        string revWord = word;
        reverse(revWord.begin(), revWord.end());
        result += revWord;
    } else {
        result += word;
    }
    
    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;       // Output: a
    cout << spinWords("this is a test") << endl; // Output: this is a test
    cout << spinWords("this is another test") << endl; // Output: this is rehtona test
    cout << spinWords("hi") << endl;         // Output: hi

    return 0;
}