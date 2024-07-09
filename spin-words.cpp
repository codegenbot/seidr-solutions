#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int length = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (length >= 5) {
                for (int j = length - 1; j >= 0; j--) {
                    result += sentence[i-length+j];
                }
            } else {
                result += sentence.substr(i-length+1, i);
            }
            length = 0;
        } else {
            length++;
        }
    }
    if (length >= 5) {
        for (int j = length - 1; j >= 0; j--) {
            result += sentence[i-length+j];
        }
    } else {
        result = sentence.substr(i-length+1);
    }
    return result;
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a string (or 'exit' to stop): ";
        std::cin >> input;
        if (input == "exit") {
            break;
        }
        std::cout << spinWords(input) << std::endl;
    }
    return 0;
}