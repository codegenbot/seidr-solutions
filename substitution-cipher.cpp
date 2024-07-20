#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::string result = "";
    
    for (int i = 0; i < message.length(); i++) {
        for (int j = 0; j < cipher_map1.length(); j++) {
            if (message[i] == cipher_map1[j]) {
                result += cipher_map2[j];
                break;
            }
        }
    }
    
    return result;
}

int main() {
    std::string cipher_map1, cipher_map2, message;
    
    // Read input from user
    std::cin >> cipher_map1 >> cipher_map2 >> message;
    
    std::cout << decipher(cipher_map1, cipher_map2, message) << std::endl;
    
    return 0;
}