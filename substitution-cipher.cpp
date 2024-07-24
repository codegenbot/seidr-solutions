```cpp
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string cipher2;
    std::cin >> cipher2;
    std::string cipher1;
    std::cin >> cipher1;
    std::string message;
    std::getline(std::cin, message);

    std::vector<std::pair<char, char>> cipherMap;
    for(int i = 0; i < cipher1.length(); i++) {
        cipherMap.push_back({cipher1[i], cipher2[i]});
    }

    std::string result = "";
    for(int i = 0; i < message.length(); i++) {
        char c = message[i];
        bool found = false;
        for(const auto& pair : cipherMap) {
            if(pair.first == c) {
                result += pair.second;
                found = true;
                break;
            }
        }
        if(!found) {
            // Handle characters not in the cipher map by keeping them unchanged
            result += c;
        }
    }
    std::cout << result.c_str() << std::endl;
    return 0;
}