#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string temp = "";

    for(int i=0; i<sentence.length(); i++) {
        char c = sentence[i];
        if(c == ' ') {
            if(temp.length() >= 5)
                std::reverse(temp.begin(), temp.end());
            result += temp + " ";
            temp = "";
        } else {
            temp += c;
        }
    }

    if(temp.length() >= 5)
        std::reverse(temp.begin(), temp.end());

    result += temp;

    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl; // Output: a
    cout << spinWords("this is a test") << endl; // Output: this is a test
    cout << spinWords("this is another test") << endl; // Output: this is rehtona test
    cout << spinWords("hi") << endl; // Output: hi

    return 0;
}