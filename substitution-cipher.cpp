```cpp
#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::string result = "";
    for (char c : message) {
        bool found = false;
        for (int i = 0; i < cipher_map1.length(); i++) {
            if (c == cipher_map1[i]) {
                result += cipher_map2[i];
                found = true;
                break;
            }
        }
        if (!found)
            result += c; 
    }
    return result;
}

int main() {
    std::string cipher_map1, cipher_map2, message;
    std::cout << "Enter the first string: ";
    std::cin >> cipher_map1;
    std::cout << "Enter the second string: ";
    std::cin >> cipher_map2;
    std::cout << "Enter the message to decipher: ";
    std::cin >> message;
    std::cout << "Deciphered message: " << decipher(cipher_map1, cipher_map2, message) << std::endl;
    return 0;
}