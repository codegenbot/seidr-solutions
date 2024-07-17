```cpp
std::string middleCharacter(std::string input) {
    int length = input.length();
    if (length % 2 == 0) {
        return input.substr(length / 2 - 1, 2);
    } else {
        return input.substr(length / 2, 1);
    }
}