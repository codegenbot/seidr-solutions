int pairedDigits(const std::string& str) {
    int sum = 0;
    for (int i = 0; i < str.size() - 1; i++) {
        if (std::stoi(std::string(1, str[i])) == std::stoi(std::string(1, str[i + 1]))) {
            sum += std::stoi(std::string(1, str[i])) - '0';
        }
    }
    return sum;
}