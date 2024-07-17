#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipherMap1, std::string cipherMap2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (cipherMap1[i] == cipherMap2[i]) {
            result += cipherMap1[i];
        } else {
            int j;
            for (j = 0; j < cipherMap1.length(); j++) {
                if (cipherMap1[j] == cipherMap2[i]) {
                    break;
                }
            }
            result += cipherMap1[j];
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