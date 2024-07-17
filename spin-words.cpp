#include <iostream>
#include <string>
#include <algorithm>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::string temp = "";

    for (char c : sentence) {
        if (c == ' ') {
            if (!temp.empty() && temp.length() >= 5)
                result += std::string(temp).rbegin()->substr(0, temp.length()) + " ";
            else
                result += temp + " ";
            temp = "";
        } else {
            temp += c;
        }
    }

    if (!temp.empty() && temp.length() >= 5)
        result += std::string(temp).rbegin()->substr(0, temp.length());
    else
        result += temp;

    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string of one or more words, or 'q' to quit: ";
        std::getline(std::cin, input);
        if (input == "q")
            break;
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}