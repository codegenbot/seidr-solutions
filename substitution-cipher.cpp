#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        bool found = false;
        for (int j = 0; j < cipher1.length(); j++) {
            if (message[i] == cipher1[j]) {
                result += cipher2[j];
                found = true;
                break;
            }
        }
        if (!found) result += message[i]; // If the character is not in the cipher, add it as is
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}