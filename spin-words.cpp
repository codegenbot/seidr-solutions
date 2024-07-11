#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string input;
    getline(std::cin, input);
    
    std::string word;
    std::string result;
    for (int i = 0; i <= input.size(); ++i) {
        if (i == input.size() || input[i] == ' ') {
            if (word.size() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + (i == input.size() ? "" : " ");
            word = "";
        } else {
            word += input[i];
        }
    }
    
    std::cout << result << std::endl;
    
    return 0;
}