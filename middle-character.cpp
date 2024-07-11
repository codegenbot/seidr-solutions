```cpp
std::string middleCharacter(std::string s) {
    int len = s.length();
    return len % 2 == 0 ? s.substr((len-1)/2, 2) : s.substr((len-1)/2, 1);
}