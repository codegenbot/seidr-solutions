```cpp
#include <iostream>
#include <string>

std::string spinWords(const std::string& str) {
    std::string result = "";
    for (const auto& word : str + " ") {
        if (word.length() >= 5)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }
    return result.substr(0, result.find_last_of(" ") + 1);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Spin words: " << spinWords(str) << std::endl;
    return 0;
}