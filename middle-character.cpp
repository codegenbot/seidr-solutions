std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len == 0)
        return "";
    
    int start = len / 2;
    std::string result = s.substr((start - 1), (len % 2 == 0) ? 2 : 1);
    
    return result;
}