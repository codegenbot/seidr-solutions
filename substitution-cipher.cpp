#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    cipher1 = tolower(cipher1);
    cipher2 = tolower(cipher2);
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        char c = tolower(message[i]); 
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            if (index >= 0 && index < cipher1.length()) {
                result += cipher2[index];
            } else {
                result += c; 
            }
        } else {
            result += message[i]; 
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << decipher(cipher1, cipher2, message) << std::endl;
    return 0;
}