````
#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        int index = message[i] - 'a';
        if (index >= 0 && index < cipher1.length()) {
            result += cipher2[index];
        } else {
            result += message[i];
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}