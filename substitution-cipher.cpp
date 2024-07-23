```c++
string cipher(string cipher1, string cipher2, string input) {
    string result = "";
    for (char c : input.substr(0, input.find('\0'))) {
        if (c != '\0') {  
            size_t pos = cipher2.find(std::tolower(c)); 
            if (pos != std::string::npos) {
                result += cipher1[pos]; 
            } else {
                char originalCase = (std::isupper(c)) ? std::toupper(c) : std::tolower(c);
                size_t pos2 = cipher1.find(originalCase); 
                if (pos2 != std::string::npos) {
                    result += originalCase; 
                } else {
                    result += c; 
                }
            }
        }
    }
    return result;
}