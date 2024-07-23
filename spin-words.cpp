```
#include <algorithm>
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
    
    if (!word.empty()) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word;
    }
    
    return result;
}

int main() { return 0; }