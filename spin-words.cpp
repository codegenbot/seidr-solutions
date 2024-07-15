```c++
#include <iostream>
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t len = str.find(" ", pos + 1);
        if (len == std::string::npos)
            len = str.length();
        
        if (len - pos > 4) {
            std::string temp = str.substr(pos, len - pos);
            for(int i = temp.size() - 1; i >= 0; i--) {
                result += temp[i];
            }
            result += " ";
        } else
            result += str.substr(pos, len - pos) + " ";
        
        pos = len;
    }
    
    if (str.length() > 0)
        result += str;

    return result;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    std::cout << spinWords(str) << std::endl;
    return 0;
}