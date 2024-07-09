```cpp
for (char c : input) { 
    int digit = c - '0'; 
    output += std::to_string(digit * digit);
}