```cpp
#include <iostream>
#include <string>
#include <limits>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        int pos = cipher_map1.find(c);
        if (pos != std::string::npos) {
            message[i] = cipher_map2[pos];
        }
    }
    return message;
}

int main() {
    std::string cipher_map1, cipher_map2, message;
    std::cout << "Enter the first string: ";
    getline(cin, cipher_map1);
    std::cout << "Enter the second string: ";
    getline(cin, cipher_map2);
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    getline(cin, message); 
    std::cout << "Deciphered message: " << decipher(cipher_map1, cipher_map2, message) << std::endl;
    return 0;
}