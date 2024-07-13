```cpp
int pairedDigits(const char* s) {
    std::string str = s;
    int sum = 0;
    size_t i = 0; 
    for (; i < str.size() - 1; ++i) { 
        if ((str[i] - '0') == (str[i + 1] - '0')) {
            sum += (str[i] - '0') * 2;
        } else {
            sum += str[i] - '0';
        }
    }
    return sum; 
}