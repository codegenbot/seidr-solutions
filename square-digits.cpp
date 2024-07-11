std::string squareDigits(std::string input) {
    std::string result = "";
    for (char c : input) {
        result += std::to_string(std::stoi(std::string(1, c)) * std::stoi(std::string(1, c)));
    }
    return result;
}