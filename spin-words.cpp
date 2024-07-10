#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += c;
        }
    }
    
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;
    
    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;  // Output: a
    cout << spinWords("this is a test") << endl;  // Output: this is a test
    cout << spinWords("this is another test") << endl;  // Output: this is rehtona test
    cout << spinWords("hi") << endl;  // Output: hi

    return 0;
}