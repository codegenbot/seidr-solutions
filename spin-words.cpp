#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string word;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            result += word + " ";
            word = "";
        } else {
            word += sentence[i];
        }
    }
    
    result += word;
    
    int start = 0, end = 0;
    for (int i = 0; i < result.length(); i++) {
        if (result[i] == ' ') {
            end = i - 1;
            if (end >= start && result.substr(start, end - start + 1).length() > 4) {
                std::reverse(result.substr(start, end - start + 1).begin(), result.substr(start, end - start + 1).end());
            }
            start = i + 1;
        }
    }
    
    if (start < result.length() && result.substr(start, result.length() - start).length() > 4) {
        std::reverse(result.substr(start, result.length() - start).begin(), result.substr(start, result.length() - start).end());
    }
    
    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl; // Should print "a"
    cout << spinWords("this is a test") << endl; // Should print "this is a test"
    cout << spinWords("this is another test") << endl; // Should print "this is rehtona test"
    cout << spinWords("hi") << endl; // Should print "hi"

    return 0;
}