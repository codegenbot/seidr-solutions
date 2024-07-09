#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>

std::string decipher(const std::string& cipher_map, const std::string& message) {
    std::unordered_map<char, char> map;
    for (int i = 0; i < cipher_map.size() / 2; ++i) {
        map[cipher_map[i]] = cipher_map[i + cipher_map.size() / 2];
    }
    std::string result;
    for (char c : message) {
        if (map.find(c) != map.end()) {
            result += map.at(c);
        } else {
            result += c; // Leave unknown characters as is
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