```cpp
int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < static_cast<std::string>(s).size() - 1; ) {
        if ((static_cast<char>(s[i]) - '0') == (static_cast<char>(s[i + 1]) - '0')) {
            sum += (static_cast<char>(s[i]) - '0') * 2;
            i++; 
        } else {
            sum += static_cast<char>(s[i]) - '0';
            i++;
        }
    }
    return sum;
}