```cpp
void substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    for (char c : message) {
        int offset = isupper(c) ? 0 : tolower(c) - 'a';
        std::cout << (isalpha(c)) ? cipher2[offset] : c;
    }
}