#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string cipher2;
    std::cin >> cipher2;
    std::string cipher1;
    std::cin >> cipher1;
    std::string message;
    std::getline(std::cin, message);

    std::unordered_map<std::string, std::string> cipherMap;
    for(int i = 0; i < cipher1.length(); i++) {
        cipherMap[cipher1.substr(0, 1)] = cipher2.substr(0, 1);
    }

    std::string result = "";
    for(int i = 0; i < message.length(); i++) {
        char c = message[i];
        if(cipherMap.find(std::string(1, tolower(c))) != cipherMap.end()) {
            result += cipherMap.at(std::string(1, tolower(c)));
        } else {
            // Check for non-alphanumeric characters (spaces, punctuation)
            if (!isalnum(c)) {
                result += c;
            } else {
                result += std::string(1, c);
            }
        }
    }
    std::cout << result.c_str() << std::endl;
    return 0;
}