#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t len = pos;
        if (len >= 5) {
            std::string word = str.substr(0, pos);
            for (int i = word.length() - 1; i >= 0; --i)
                result += word[i];
            str.erase(0, pos + 1);
        } else {
            result += str.substr(0, pos + 1);
            str.erase(0, pos + 1);
        }
    }
    if (str.length() > 4) {
        std::string word = str;
        for (int i = word.length() - 1; i >= 0; --i)
            result += word[i];
    } else
        result += str;
    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;  // a
    cout << spinWords("this is a test") << endl;  // this is a test
    cout << spinWords("this is another test") << endl;  // this is rehtona test
    cout << spinWords("hi") << endl;  // hi

    return 0;
}