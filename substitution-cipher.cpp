#include <vector>
#include <iostream>
#include <string>

std::string substituteCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::string decipheredMessage;
    for (char c : message) {
        char lowerC = tolower(c); // Convert to lowercase
        int index = std::distance(cipher1.begin(), std::equal_range(cipher1.begin(), cipher1.end(), lowerC)) - cipher1.begin();
        decipheredMessage += (index < cipher2.length()) ? cipher2[index] : c;
    }
    return decipheredMessage;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substituteCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}