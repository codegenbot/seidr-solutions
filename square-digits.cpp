```cpp
std::string squareDigits(int n) {
    std::string str = std::to_string(n);
    std::string result;
    for (char c : str) {
        result.push_back((c - '0') * (c - '0') + '0');
    }
}