#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::stringstream ss(input);
    std::string word;
    std::string output;

    while (ss >> word) {
        if (word.length() >= 5)
            output += std::string(word.rbegin(), word.rend()) + " ";
        else
            output += word + " ";
    }

    return output.substr(0, output.size()-1);
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;  // Should print: a
    cout << spinWords("this is a test") << endl;  // Should print: this is a test
    cout << spinWords("this is another test") << endl;  // Should print: this is rehtona test
    cout << spinWords("hi") << endl;  // Should print: hi

    return 0;
}