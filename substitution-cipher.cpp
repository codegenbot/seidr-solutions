```cpp
std::string applyCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string result;
    for (char c : message) {
        int cipherIndex = 0;
        while (cipherIndex < cipher1.size() && cipher1[cipherIndex] != c) {
            cipherIndex++;
        }
        if (cipherIndex >= cipher1.size()) {
            result += c; // character not found in cipher, leave it as is
        } else {
            result += cipher2[cipherIndex]; // substitute with corresponding character from cipher2
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << applyCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}