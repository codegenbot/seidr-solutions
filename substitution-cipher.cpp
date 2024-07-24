#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string cipher1;
    std::getline(std::cin, cipher1);
    std::string cipher2;
    std::getline(std::cin, cipher2);
    std::string message;
    std::getline(std::cin, message);

    std::unordered_map<char, char> cipherMap;
    for(int i = 0; i < cipher1.length(); i++) {
        if(cipher1[i] != ' ' && cipher2[i] != ' ') { // Check if the character is alphabetic
            cipherMap[cipher1[i]] = cipher2[i];
        }
    }

    std::string result;
    for(int i = 0; i < message.length(); i++) {
        char c = message[i]; 
        if(isalpha(c)) { // Check if the character is alphabetic
            c = std::tolower(c); // Convert to lowercase
            if(cipherMap.find(c) != cipherMap.end()) { // Find in map and substitute
                result += cipherMap.at(c);
            } else {
                result += c; // If not found, add original char
            }
        } else { // Non-alphabet characters remain unchanged
            result += c;
        }
    }
    std::cout << result.c_str() << std::endl;
    return 0;
}