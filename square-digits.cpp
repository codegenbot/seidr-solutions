std::string squareDigits(int n) {
    std::string str = std::to_string(n);
    std::string result;
    for (char c : str) {
        int square = (c - '0') * (c - '0');
        char digit = static_cast<char>(square + '0'); 
        result += std::string(1, digit); 
    }
    return result;