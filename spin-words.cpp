#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int start = 0;
    for(int i = 0; i <= sentence.length(); i++) {
        if(i == sentence.length() || sentence[i] == ' ') {
            std::string word = sentence.substr(start, i - start);
            if(word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            start = i + 1;
        }
    }
    return result.substr(0, result.length()-1); // remove the extra space at the end
}

int main() {
    std::string input;
    while(std::cin >> input) {
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}