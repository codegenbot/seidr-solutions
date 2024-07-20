#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string spinWords(std::string str) {
    std::string result;
    std::string word;

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5)
                {std::vector<char> wordVec(word);
                 std::reverse(wordVec.begin(), wordVec.end());
                 result += std::string(wordVec.begin(), wordVec.end()) + " ";
                }
            else
                result += word + " ";
            word = "";
        } 
        else 
            word += c;
    }

    if (word.length() >= 5)
        {std::vector<char> wordVec(word);
         std::reverse(wordVec.begin(), wordVec.end());
         result += std::string(wordVec.begin(), wordVec.end());}
    else
        result += word;

    return result;
}

int main() {
    std::string str;
    while (true) {
        std::cout << "Enter a string: ";
        std::getline(std::cin, str);
        if (str == "exit") break;
        std::cout << "Spin words: " << spinWords(str) << std::endl;
    }
}