std::string squareDigits(std::string input) {
    std::string output = "";
    for(int i=0; i<input.length(); i++) {
        int digit = input[i] - '0';
        output += std::to_string(digit * digit);
    }
    return output;
}