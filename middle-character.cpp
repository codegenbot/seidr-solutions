```cpp
std::string middleCharacter(std::string input) {
    int length = input.length();
    if (length % 2 == 0) {
        std::string result = "";
        for (int i = length / 2 - 1; i <= length / 2 + 1; i++) {
            result += input[i];
        }
        return result;
    } else {
        return input.substr(length / 2, 1);
    }
}