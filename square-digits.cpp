std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) { 
        int digit = c - '0'; 
        digit *= digit; 
        if(digit >= 10000){
            return "Error: Input number is too large.";
        }
        output += std::to_string(digit);
    }
    return output;
}