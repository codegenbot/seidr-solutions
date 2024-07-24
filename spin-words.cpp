#include <vector>
#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string output = "";
    size_t start = 0;
    for (size_t end = 0; end <= input.size(); ) {
        if (input[end] == ' ') {
            output += input.substr(start, end - start);
            start = end + 1;
        } else if (end == input.size()) {
            output += input.substr(start, end - start + 1);
            break;
        }
        end++;
    }

    for (size_t i = 0; i < output.size(); ) {
        size_t wordStart = i;
        while (i < output.size() && output[i] != ' ') i++;
        std::string word = output.substr(wordStart, i - wordStart);
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        output.replace(wordStart, i - wordStart + 1, word);
    }

    return output;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;  // Output: a
    cout << spinWords("this is a test") << endl;  // Output: this is a test
    cout << spinWords("this is another test") << endl;  // Output: this is rehtona test
    cout << spinWords("hi") << endl;  // Output: hi

    return 0;
}