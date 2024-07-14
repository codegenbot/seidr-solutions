#include <vector>
#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    std::string word = "";

    for (char c : input) {
        if (c == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            output += word + " ";
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    output += word;

    return output;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;  // Should print: a
    cout << spinWords("this is a test") << endl;  // Should print: this is a test
    cout << spinWords("this is another test") << endl;  // Should print: this is rehtona test
    cout << spinWords("hi") << endl;  // Should print: hi

    return 0;
}