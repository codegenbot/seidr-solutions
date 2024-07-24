#include <vector>
#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    int start = 0;
    
    for(int i = 0; i <= sentence.length(); i++) {
        if(i == sentence.length() || sentence[i] == ' ') {
            std::string word = sentence.substr(start, i - start);
            
            if(word.length() >= 5) 
                result += std::string(word.rbegin(), word.rend());
            else
                result += word;
            
            if(i < sentence.length())
                result += " ";
            start = i + 1;
        }
    }
    
    return result;
}

int main() {
    // Read input from user and test the function
    std::cout << "Enter a string: ";
    std::string sentence;
    std::getline(std::cin, sentence);
    std::cout << spinWords(sentence) << std::endl;
    
    return 0;
}