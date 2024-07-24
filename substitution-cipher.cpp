#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>

int main() {
    std::string cipher2;
    std::cin >> cipher2;
    std::string cipher1;
    std::cin >> cipher1;
    std::string message;
    std::getline(std::cin, message);

    std::unordered_map<char, std::string> cipherMap;
    for(int i = 0; i < cipher1.length(); i++) {
        cipherMap[cipher1[i]] = cipher2.substr(i, 1);
    }

    std::string result;
    for(int i = 0; i < message.length(); i++) {
        if(std::isalnum(message[i])) {
            char c = std::tolower(message[i]);
            if(cipherMap.find(c) != cipherMap.end()) {
                result += cipherMap.at(c);
            } else {
                result += c;
            }
        } else {
            result += message[i];
        }
    }
    std::cout << result.c_str() << std::endl;
    return 0;
}