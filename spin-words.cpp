```cpp
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result;
    std::string word;

    for (char c : sentence) {
        if (c == ' ') {
            result += word + " ";
            word.clear();
        } else {
            word += c;
        }
    }

    result += word;

    size_t pos = 0;
    while ((pos = result.find(" ")) != std::string::npos) {
        if(result.substr(pos, 5).find_first_of({ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' }) != std::string::npos) {
            temp = result.substr(0, pos);
            temp += std::string(result.substr(pos + 1)).rbegin()->str();
            for(int i = 1; i < (result.length() - pos - 1)/5; i++){
                temp += " ";
                temp += std::string(result.substr(pos + 5*i, 5)).rbegin()->str();
            }
            result = temp;
        } else {
            break;
        }
    }

    return result;
}

int main() {
    std::cout << spinWords("a") << std::endl; // a
    std::cout << spinWords("this is a test") << std::endl; // this is a test
    std::cout << spinWords("this is another test") << std::endl; // this is rehtona test
    std::cout << spinWords("hi") << std::endl; // hi
    return 0;
}