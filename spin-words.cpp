```c++
#include <iostream>
#include <vector>
#include <algorithm>

std::string spinWords(std::string sentence) {
    std::vector<char> result;
    
    for (char c : sentence) {
        if (c == ' ') {
            if (temp.length() >= 5) {
                std::string tempRev = temp;
                std::reverse(tempRev.begin(), tempRev.end());
                for (char c : tempRev) {
                    result.push_back(c);
                }
            } else
                for (char c : temp)
                    result.push_back(c);

            temp = "";
        } else {
            temp += c;
        }
    }

    if (temp.length() >= 5) {
        std::string tempRev = temp;
        std::reverse(tempRev.begin(), tempRev.end());
        for (char c : tempRev) {
            result.push_back(c);
        }
    } else
        for (char c : temp)
            result.push_back(c);

    return std::string(result.begin(), result.end());
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