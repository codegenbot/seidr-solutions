#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t len = str.find(" ", pos + 1);
        if (len == std::string::npos)
            len = str.length();
        
        std::string temp = str.substr(pos, len - pos);
        if(temp.size() > 4)
            result += std::string(temp.rbegin(), temp.rend()) + " ";
        else
            result += temp + " ";
        
        pos = len;
    }
    
    if (str.length() > 0)
        result += str;

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << spinWords(str) << std::endl;
    }
    return 0;
}