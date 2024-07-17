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
        if (result.substr(pos, 5).find_first_of('a'...'z') != std::string::npos) {
            std::string temp = result.substr(0, pos);
            temp += result.substr(pos + 1);
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