```cpp
std::string squareDigits(std::string input) {
    std::stringstream output;
    for (char c : input.erase(0, input.find_first_of(" "))) { 
        int digit = c - '0';
        output << (c - '0') * (c - '0'); 
    }
    return output.str();
}