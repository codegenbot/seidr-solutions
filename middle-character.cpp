```c++
std::string middleCharacter(std::string s) {
    int len = s.length();
    return len % 2 == 0 ? s.substr(len / 2 - 1, 2) : std::string(1, s[len / 2]);
}