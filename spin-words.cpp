#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word = "";

    for (char c : str) {
        if (c != ' ') {
            word += c;
        } else {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        }
    }

    // Reverse the last word if it's five or more letters long
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;         // Output: a
    cout << spinWords("this is a test") << endl;       // Output: this is a test
    cout << spinWords("this is another test") << endl;     // Output: this is rehtona test
    cout << spinWords("hi") << endl;          // Output: hi

    return 0;
}