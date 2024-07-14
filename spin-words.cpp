#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::vector<std::string> words;

    // Split the sentence into words
    char* token = strtok(const_cast<char*>(sentence.c_str()), " ");
    while(token != NULL) {
        words.push_back(token);
        token = strtok(NULL, " ");
    }

    // Reverse each word that is 5 or more characters long
    for(int i = 0; i < words.size(); i++) {
        if(words[i].size() >= 5) {
            std::reverse(words[i].begin(), words[i].end());
        }
    }

    // Join the words back together with spaces in between
    for(int i = 0; i < words.size(); i++) {
        result += words[i];
        if(i < words.size()-1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    return 0;
}