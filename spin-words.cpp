```c++
#include <string>
#include <sstream>

std::string spinWords(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result;

    while (std::getline(ss, word, ' ')) {
        if(word.size()>4)
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }

    if (result.back() == ' ') 
        result.pop_back();

    return result;
}

int main() {
    std::string str = "hello world"; // your input string
    std::cout << spinWords(str) << std::endl;
    return 0;
}