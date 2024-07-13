```c++
#include <string>
#include <sstream>

int main() {
    std::string str = "Hello World";
    std::cout << spinWords(str) << std::endl;
    return 0;
}

std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::stringstream result;

    while (ss >> word) {
        if (word.length() >= 5)
            for (int i = word.length() - 1; i >= 0; --i)
                result << word[i];
        else
            result << word;
        result << ' ';
    }

    return result.str();
}