#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }

    result += word;

    std::size_t pos = 0;
    while ((pos = result.find(" ")) != std::string::npos) {
        if (result.substr(pos+1).length() >= 5) {
            std::string temp = result.substr(pos+1);
            for (int j = temp.length()-1; j >= 0; j--) {
                result.replace(pos+1, temp.length(), temp.substr(j, 1));
            }
        } else {
            pos++; 
        }
    }

    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;

    return 0;
}