```cpp
#include <string>

std::string spinWords(std::string str) {
    std::string result = "";
    std::string::size_type pos = 0;
    
    while ((pos = str.find(" ")) != std::string::npos) {
        std::string::size_type len = str.find(" ", pos + 1);
        if (len == std::string::npos)
            len = str.length();
        
        if (len - pos > 4) {
            std::string temp = str.substr(pos, len - pos);
            std::reverse(temp.begin(), temp.end());
            result += temp + " ";
        } else
            result += str.substr(pos, len - pos) + " ";
        
        pos = len;
    }
    
    if (!str.empty())
        result += str;

    return result;
}