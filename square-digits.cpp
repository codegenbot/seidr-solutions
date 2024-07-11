std::string squareDigits(std::string input) {
    std::string output = input;
    for (int i = 0; i < input.length(); ++i) {
        int digit = input[i] - '0';
        output[i] = (char)(digit * digit + '0');
    }
    return output;
}