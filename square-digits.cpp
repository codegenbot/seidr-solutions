```cpp
std::string squareDigits(std::string input) {
    std::string temp = input; 
    for(int i = 0; i < temp.length(); i++) {
        int digit = temp[i] - '0';
        std::string squared = std::to_string(digit * digit);
        temp.replace(i, 1, squared);
    }
    return temp;
}