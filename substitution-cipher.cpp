```cpp
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

    std::unordered_map<char, char> cipherMap;
    for(int i = 0; i < cipher2.length(); i++) {
        cipherMap[cipher2[i]] = cipher1[i];
    }

    std::string result = "";
    for(int i = 0; i < message.length(); i++) {
        char c = message[i];
        if(cipherMap.find(c) != cipherMap.end()) {
            result += cipherMap.at(c);
        } else {
            // Check for non-alphanumeric characters (spaces, punctuation)
            if (!isalnum(c)) {
                result += c;
            } else {
                result += c; // Keep the original character
            }
        }
    }
    std::cout << result.c_str() << std::endl;
    return 0;
}