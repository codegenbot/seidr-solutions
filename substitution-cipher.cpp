```cpp
#include <iostream>
#include <string>

int main() {
    std::string cipher2;
    std::cin >> cipher2;
    std::string cipher1;
    std::cin >> cipher1;
    std::string message;
    std::getline(std::cin, message);

    std::map<char, char> cipherMap;
    for(int i = 0; i < cipher1.length(); i++) {
        cipherMap[cipher1[i]] = cipher2[i];
    }

    std::string result = "";
    for(int i = 0; i < message.length(); i++) {
        std::string c = message.substr(i, 1);
        if(cipherMap.find(c[0]) != cipherMap.end()) {
            result.append(1, cipherMap.at(c[0]));
        } else {
            // Handle characters not in the cipher map by keeping them unchanged
            result.append(1, c[0]);
        }
    }
    std::cout << result.c_str() << std::endl;
    return 0;
}