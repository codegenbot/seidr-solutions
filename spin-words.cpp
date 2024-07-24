#include <iostream>
#include <string>

std::string spinWords(std::string sentence) {
    std::string result = "";
    std::vector<std::string> words;
    
    // split input string into words
    char* token = strtok(const_cast<char*>(sentence.c_str()), " ");
    while(token != NULL){
        words.push_back(token);
        token = strtok(NULL, " ");
    }
    
    for(int i=0; i<words.size(); i++){
        if(words[i].length() >= 5) {
            std::reverse(words[i].begin(), words[i].end());
        }
        result += words[i];
        
        // add space after each word except the last one
        if(i < words.size()-1) {
            result += " ";
        }
    }
    
    return result;
}

int main() {
    std::cout << spinWords("this is a test") << std::endl;  // should print: this is a tset
    std::cout << spinWords("Hello World") << std::endl;  // should print: Hello dluorW
    return 0;
}