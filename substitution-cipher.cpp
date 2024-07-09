#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipher_map, const std::string& message) {
    std::string result;
    for (char c : message) {
        for (int i = 0; i < cipher_map.size(); ++i) {
            if (cipher_map[i] == c) {
                result += (i < message.size()) ? message[i] : ' '; // Add space at the end
                break;
            }
        }
    }
    return result;
}

int main() {
    std::string map1, map2, message;
    std::cin >> map1 >> map2 >> message;
    std::cout << decipher(map1 + map2, message) << std::endl;
    return 0;
}