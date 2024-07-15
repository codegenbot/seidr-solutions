```cpp
std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    std::map<char, char> substitutions;
    for (size_t i = 0; i < cipher1.size(); ++i) {
        substitutions[cipher1[i]] = cipher2[i];
    }
    for (char c : message) {
        if (substitutions.count(c)) {
            result += substitutions.at(c);
        } else {
            result += c;
        }
    }
    return result;
}