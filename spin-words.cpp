#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    char* token = strtok(const_cast<char*>(str.c_str()), " ");
    
    while(token != NULL) {
        int wordLength = strlen(token);
        
        if(wordLength >= 5) {
            for(int i = wordLength - 1; i >= 0; --i)
                result += token[i];
        } else
            result += token;
        
        result += " ";
        token = strtok(NULL, " ");
    }
    
    return result.substr(0, result.length() - 1);
}

int main() {
    std::string str;
    std::cout << "Enter a string of one or more words (separated by spaces): ";
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}