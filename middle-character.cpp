std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    int middleIndex = (len - 1) / 2;
    std::string result;
    if(len % 2 == 0) {
        result = s.substr(middleIndex, 2);
    } else {
        result = s.substr(middleIndex, 1);
    }
    return result;
}