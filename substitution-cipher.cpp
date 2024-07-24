#include <iostream>
#include <string>
#include <map>
#include <cctype>

int main() {
    std::string cipher2;
    std::cin >> cipher2;
    std::string cipher1;
    std::cin >> cipher1;
    std::cin.ignore();
    std::string message;
    std::getline(std::cin, message);
    
    // Store the cipher mapping in a map
    std::map<char, char> cipherMap;
    for(int i = 0; i < cipher1.length(); i++) {
        cipherMap[tolower(cipher1[i])] = tolower(cipher2[i]);
    }
    
    std::string result = message;
    std::transform(message.begin(), message.end(), result.begin(), [&](char c) { return cipherMap[c]; });
    std::cout << result << std::endl;
    return 0;
}