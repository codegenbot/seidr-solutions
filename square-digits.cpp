std::string squareDigits(std::string n) {
    std::string res = "";
    for (char c : n) {
        int num = c - '0';
        res += std::to_string(num * num);
    }
    return res;
}