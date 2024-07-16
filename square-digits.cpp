```cpp
for (char c : input) {
    int digit = c - '0';
    char squared_digit = (digit * digit) + '0'; 
    output += std::string(1, squared_digit); 
}