#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i + 1] == ' ') {
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }
    
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