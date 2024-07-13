#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    string decrypted_message = "";
    for (int i = 0; i < message.length(); i++) {
        if (i < cipher_map1.length()) {
            int index = cipher_map1.find(message[i]);
            if (index != -1)
                decrypted_message += cipher_map2[index];
            else
                decrypted_message += message[i];
        } else {
            decrypted_message += message[i];
        }
    }
    return decrypted_message;
}

int main() {
    std::string map1, map2, message;
    std::cout << "Enter the first string: ";
    std::cin >> map1;
    std::cout << "Enter the second string: ";
    std::cin >> map2;
    std::cout << "Enter the third string: ";
    std::cin >> message;
    std::cout << "Decrypted message is: " << decipher(map1, map2, message) << std::endl;
    return 0;
}