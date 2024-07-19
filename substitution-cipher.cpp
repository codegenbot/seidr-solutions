#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipherMap1, std::string cipherMap2, std::string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        for (int j = 0; j < cipherMap1.length(); j++) {
            if (message[i] == cipherMap1[j]) {
                result += cipherMap2[j];
                break;
            }
        }
    }
    return result;
}

int main() {
    std::string cipherMap1, cipherMap2, message;
    std::cin >> cipherMap1 >> cipherMap2 >> message;
    std::cout << decipher(cipherMap1, cipherMap2, message) << std::endl;
    return 0;
}