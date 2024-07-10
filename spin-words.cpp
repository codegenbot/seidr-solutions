#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int start = 0;
    
    for(int i = 0; i <= str.length(); i++){
        if(i == str.length() || str[i] == ' '){
            std::string word = str.substr(start, i-start);
            if(word.length() >= 5) {
                std::reverse(word.begin(), word.end());
            }
            result += word + " ";
            start = i+1;
        }
    }
    
    return result;
}

int main(){
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("a") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    return 0;
}