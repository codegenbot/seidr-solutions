```cpp
std::string squareDigits(std::string input) {
    std::string output = "";
    for (char c : input) { 
        int digit = (c - '0'); // Extract the digit (0-9)
        int squaredDigit = digit * digit; // Square each digit separately
        output += std::to_string(squaredDigit); // Concatenate squares into a string
    }
    return output;
}