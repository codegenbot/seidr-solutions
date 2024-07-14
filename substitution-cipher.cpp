#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipherText, std::string key1, std::string key2) {
    std::string result;
    for (int i = 0; i < cipherText.size(); ++i) {
        if (key1[i] == key2[i]) {
            result += cipherText[i];
        } else {
            int j = 0;
            while (j < key1.size() && (key1[j] != key2[i])) {
                j++;
            }
            if (j < key1.size()) {
                result += key2[i];
            } else {
                result += cipherText[i];
            }
        }
    }
    return result;
}

int main() {
    std::string cipherText, key1, key2;
    std::cout << "Enter the first string: ";
    std::cin >> key1;
    std::cout << "Enter the second string: ";
    std::cin >> key2;
    std::cout << "Enter the third string: ";
    std::cin >> cipherText;
    std::cout << "Deciphered message: " << decipher(cipherText, key1, key2) << std::endl;
    return 0;
}