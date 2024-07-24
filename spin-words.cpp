#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = sentence.find(" ")) != std::string::npos) {
        std::size_t nextPos = sentence.find(" ", pos + 1);
        if (nextPos == std::string::npos)
            nextPos = sentence.length();
        
        std::string word = sentence.substr(pos, nextPos - pos);
        
        if (word.size() >= 5)
            std::reverse(word.begin(), word.end());
        
        result += word + " ";
        pos = nextPos;
    }
    
    // Add the last word
    result += sentence.substr(pos);

    return result;
}

int main() {
    std::string input;
    while (std::cout << "Enter a string (or 'exit' to quit): " && !std::getline(std::cin, input) || input == "exit") {
        if (input == "exit")
            break;

        std::cout << spinWords(input) << '\n';
        std::cout << "Enter a string (or 'exit' to quit): ";
    }

    return 0;
}