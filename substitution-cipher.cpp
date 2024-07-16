#include <string>
#include <iostream>

std::string cipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            result += cipher2[index];
        }
        else if (c >= 'A' && c <= 'Z') {
            int index = c - 'A';
            result += toupper(cipher2[index]);
        }
        else {
            result += message[i];  // if the character is not a letter, leave it as it is
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << cipher(cipher1, cipher2, message) << std::endl;
    return 0;
}