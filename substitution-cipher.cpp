```cpp
std::string result(std::string cipher2, std::string text) {
    std::string deciphered = "";
    for (char c : text) {
        int index = 0;
        while (index < cipher2.size() && cipher2[index] != c) {
            index++;
        }
        if (index < cipher2.size()) {
            deciphered += cipher2.substr(index, 1);
        } else {
            deciphered += c;
        }
    }
    return deciphered;
}