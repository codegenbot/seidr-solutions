```cpp
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm> // Include the <algorithm> header to access std::reverse

std::string reverseWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result;

    while (ss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        result += word + " ";
    }

    result.pop_back(); // remove extra space at the end
    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string output = reverseWords(input);
    std::cout << output << std::endl;

    return 0;
}
```