std::string spinWords(std::string str) {
    std::string result = "";
    std::size_t pos = 0;
    
    while ((pos = str.find(" ")) != std::string::npos) {
        std::size_t len = str.find(" ", pos + 1);
        if (len == std::string::npos)
            len = str.length();
        
        if (len - pos > 4) {
            result += std::string(std::string(str.substr(pos, len - pos)).rbegin(), std::string(str.substr(pos, len - pos)).rend()) + " ";
        } else
            result += str.substr(pos, len - pos) + " ";
        
        pos = len;
    }
    
    if (str.length() > 0)
        result += str;

    return result;
}