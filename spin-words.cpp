Here's the solution:

#include <string>
#include <sstream>

std::string spinWords(const std::string& str) {
    std::stringstream ss(str);
    std::string word;
    std::string result = "";
    
    while (ss >> word) {
        if(word.length() >= 5) 
            result += std::string(word.rbegin(), word.rend()) + " ";
        else
            result += word + " ";
    }
    
    return result.substr(0, result.size()-1);
}

int main() {
    // Example usage:
    std::cout << spinWords("this is a test") << std::endl;
    std::cout << spinWords("hi") << std::endl;
    std::cout << spinWords("this is another test") << std::endl;
    return 0;
}