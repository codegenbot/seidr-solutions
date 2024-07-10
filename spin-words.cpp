#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    std::string temp = "";

    for (char c : input) {
        if (c == ' ') {
            if (temp.length() >= 5)
                std::reverse(temp.begin(), temp.end());
            output += temp + " ";
            temp = "";
        } else
            temp += c;
    }

    if (temp.length() >= 5)
        std::reverse(temp.begin(), temp.end());

    return output + temp;
}

int main() {
    std::string input;
    while (!(std::cin >> input).eof()) {
        std::cout << spinWords(input) << std::endl;
        std::cin.ignore();
    }
    return 0;
}