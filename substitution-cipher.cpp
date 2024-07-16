#include <string>
#include <iostream>

std::string cipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            int deciphered_index = cipher1.find(char(c));
            if(deciphered_index != std::string::npos) {
                result += cipher2[deciphered_index] ;  // add the corresponding character from cipher2
            }
        }
        else if (c >= 'A' && c <= 'Z') {
            int index = c - 'A';
            int deciphered_index = cipher1.find(char(toupper(c)));
            if(deciphered_index != std::string::npos) {
                result += toupper(cipher2[deciphered_index]);  // add the corresponding character from cipher2
            }
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