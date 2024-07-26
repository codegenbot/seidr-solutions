#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::string result;
    for (int i = 0; i < message.length(); i++) {
        if (cipher_map1[i] == cipher_map2[i]) {
            result += cipher_map2[i];
        } else {
            int j = 0;
            while (j < cipher_map1.length()) {
                if (cipher_map1[j] == message[i]) {
                    result += cipher_map2[j];
                    break;
                }
                j++;
            }
        }
    }
    return result;
}

int main() {
    std::string map1, map2, message;
    std::cin >> map1 >> map2 >> message;
    std::cout << decipher(map1, map2, message) << "\n";
    return 0;
}