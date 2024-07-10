#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    size_t start = 0;

    for (size_t i = 0; i <= sentence.size(); i++) {
        if ((i == sentence.size()) || (sentence[i] == ' ')) {
            size_t length = i - start;
            if (length >= 5) {
                std::string word = sentence.substr(start, length);
                std::reverse(word.begin(), word.end());
                result += word + " ";
            } else {
                result += sentence.substr(start, length) + " ";
            }
            start = i + 1;
        }
    }
    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;     // Should print: a
    cout << spinWords("this is a test") << endl;   // Should print: this is a test
    cout << spinWords("this is another test") << endl; // Should print: this is rehtona test
    cout << spinWords("hi") << endl;  // Should print: hi

    return 0;
}