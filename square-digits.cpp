int main() {
    std::string output = squareDigits("493193"); 
    return 0;

}

std::string squareDigits(std::string input) {
    std::string output;
    
    for (char c : input) {
        int digit = c - '0';
        output += std::to_string(digit*digit);
        
    }
    return output;
}