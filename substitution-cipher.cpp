#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (cipher_map1[i] == cipher_map2[i]) {
            result += cipher_map1[i];
        } else {
            int j = 0;
            while (j < cipher_map1.length() && cipher_map1[j] != cipher_map2[i]) {
                j++;
            }
            result += cipher_map1[j];
        }
    }
    return result;
}

int main() {
    std::string cipher_map1, cipher_map2, message;
    std::cin >> cipher_map1 >> cipher_map2 >> message;
    std::cout << decipher(cipher_map1, cipher_map2, message) << std::endl;
    return 0;
}