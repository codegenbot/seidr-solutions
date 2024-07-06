#include <vector>
#include <iostream>
#include <string>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (int i = 0; i < cipher.length(); i++) {
        char c = mapping[i];
        if (c == ' ') {
            result += ' ';
        } else {
            int idx = mapping.find(c);
            if (idx != string::npos) {
                result += cipher[idx];
            }
        }
    }
    return result;
}

int main() {
    std::string cipher, mapping;
    std::cin >> cipher >> mapping;
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}