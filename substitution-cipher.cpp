#include <iostream>
#include <string>

std::string decipherMessage(const std::string& cipherKey, const std::string& cipherValue, const std::string& message) {
    std::string decipheredMessage;
    for (char c : message) {
        size_t index = cipherKey.find(c);
        decipheredMessage += (index != std::string::npos) ? cipherValue[index] : c;
    }
    return decipheredMessage;
}

int main() {
    std::string cipherKey, cipherValue, message;
    std::cin >> cipherKey >> cipherValue >> message;
    std::cout << decipherMessage(cipherKey, cipherValue, message) << std::endl;
    return 0;
}