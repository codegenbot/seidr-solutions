#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string input) {
    std::string output;
    for (int i = 0; i < input.length(); i++) {
        if (cipher_map1[i] == cipher_map2[i]) {
            output += input[i];
        } else {
            int j = 0;
            while (j < cipher_map1.length()) {
                if (cipher_map1[j] == cipher_map2[i]) {
                    output += input[i];
                    break;
                }
                j++;
            }
        }
    }
    return output;
}

int main() {
    std::string cipher_map1, cipher_map2, input;
    std::cin >> cipher_map1 >> cipher_map2 >> input;
    std::cout << decipher(cipher_map1, cipher_map2, input) << std::endl;
    return 0;
}