#include <iostream>
#include <string>

std::string spinWords(std::string input) {
    std::string output = "";
    std::string word;
    
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            output += word + " ";
            word = "";
        } else {
            word += input[i];
        }
    }
    
    output += word;
    
    std::string result = "";
    for (int i = 0; i < output.length(); i++) {
        if ((i > 0 && output[i] == ' ') || i + 1 >= output.length()) {
            result += output.substr(i);
            break;
        } else if (output.length() - i <= 5) {
            result += output.substr(i);
            break;
        } else {
            result = output.substr(i, output.find(' ', i) - i) + " " + newReversedWord(output.substr(output.find(' ', i) + 1)) + " ";
            i += output.find(' ', i) - i;
        }
    }
    
    return result;
}

std::string newReversedWord(std::string word) {
    std::string reversed = "";
    for (int i = word.length() - 1; i >= 0; i--) {
        reversed += word[i];
    }
    return reversed;
}

int main() {
    // Your test cases here
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    return 0;
}