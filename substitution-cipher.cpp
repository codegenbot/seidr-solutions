#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result;
    for (int i = 0; i < message.length(); i++) {
        int j = 0;
        while (j < cipher1.length() && j < cipher2.length()) {
            if (cipher1[j] == message[i]) {
                result += cipher2[j];
                break;
            }
            j++;
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