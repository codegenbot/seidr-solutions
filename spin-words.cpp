#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    int start = 0;
    
    for(int i=0; i<=str.length(); i++){
        if(i == str.length() || str[i+1] == ' '){
            std::string word = str.substr(start, i-start);
            if(word.length() >= 5)
                result += std::string(word.rbegin(), word.rend()) + " ";
            else
                result += word + " ";
            start = i+1;
        }
    }
    
    return result.substr(0, result.length()-1);
}

int main() {
    std::cout << spinWords("a") << "\n";
    std::cout << spinWords("this is a test") << "\n";
    std::cout << spinWords("this is another test") << "\n";
    std::cout << spinWords("hi") << "\n";
    return 0;
}