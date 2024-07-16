#include <string>
#include <iostream>

std::string spinWords(std::string str) {
    std::string result;

    int start = 0;
    for (int i = 0; i <= str.size(); i++) {
        if ((i == str.size()) || (str[i] == ' ')) {
            std::string word = str.substr(start, i - start);
            if(word.size()>4)
                result += std::string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            start = i + 1;
        }
    }

    if (result.back() == ' ') 
        result.pop_back();

    return result;
}

int main() {
    std::cout << spinWords("Hello World") << std::endl;
    return 0;
}