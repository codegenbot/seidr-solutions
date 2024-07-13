std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) {
        int digit = c * c; 
        output += std::to_string(digit);
    }
    return output;
}