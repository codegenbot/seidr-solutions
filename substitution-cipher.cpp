#include <vector>
#include <iostream>
#include <string>

std::string decipher(const std::string& cipher, const std::string& map) {
    std::string result = "";
    for (char c : cipher) {
        for (int i = 0; i < map.length(); ++i) {
            if (map[i] == c) {
                result += char(i + 97); // ASCII value of 'a' is 97
                break;
            }
        }
    }
    return result;
}

int main() {
    std::string cipher, map, output;
    std::cin >> cipher >> map >> output;

    std::cout << decipher(output, map) << std::endl;

    return 0;
}