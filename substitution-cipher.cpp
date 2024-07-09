#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if(isalpha(toupper(c))) {
            char cDeciphered = cipher2[cipher1.find(std::tolower(c))];
            result += std::tolower(cDeciphered);
        } else {
            result += c;
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