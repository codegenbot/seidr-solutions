int pairedDigits(const std::string& s) {
    int sum = 0;
    size_t i = 0; 
    for (; i < s.size() - 1; ++i) { 
        if ((std::stoi(std::string(1, s[i]))) == (std::stoi(std::string(1, s[i + 1])))) {
            sum += (std::stoi(std::string(1, s[i]))) * 2;
        } else {
            sum += std::stoi(std::string(1, s[i]));
        }
    }
    return sum;