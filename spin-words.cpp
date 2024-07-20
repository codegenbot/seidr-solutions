#include <vector>
#include <iostream>
#include <string>

std::string spinWords(const std::string& input) {
    std::string result;
    std::string word;

    for (char c : input) {
        if (c == ' ') {
            result += c;
        } else {
            word += c;
            if (word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            word.clear();
        }
    }

    return result.substr(0, result.size()-1);
}

int main() {
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        std::cout << spinWords(s) << '\n';
    }

    return 0;
}