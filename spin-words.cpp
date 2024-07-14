```
#include <string>
#include <sstream>
#include <algorithm>

int main() {
    std::string result = spinWords("Hello World");
    std::cout << result << std::endl;
    return 0;
}

std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result = "";
    while (getline(ss, word, ' ')) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        result += word + " ";
    }
    return result.substr(0, result.size() - 1);
}