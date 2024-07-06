```cpp
#include <vector>
#include <iostream>
#include <string>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (int i = 0; i < mapping.length(); i++) {
        char c_map = mapping[i];
        char deciphered_c = (cipher.find(c_map) != std::string::npos) ? cipher[cipher.find(c_map) - 'a' : 0] : ' ';
        result += deciphered_c;
    }
    return result;
}

int main() {
    std::string cipher, mapping;
    std::cin >> cipher >> mapping;
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}