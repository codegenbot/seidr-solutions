```c++
#include <string>
#include <algorithm>

int main() {
    std::cout << spinWords("Hello World") << std::endl;
    return 0;
}

std::string spinWords(std::string str) {
    std::string result = "";
    std::string word;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (word.length() >= 5) {
                std::string temp = word;
                std::reverse(temp.begin(), temp.end()); 
                result += temp + " ";
                word.clear();
            } else {
                result += word + " ";
                word = "";
            }
        } else {
            word += str[i];
        }
    }

    if (word.length() >= 5) {
        std::string temp = word;
        std::reverse(temp.begin(), temp.end()); 
        result += temp;
    } else {
        result += word;
    }

    return result;
}