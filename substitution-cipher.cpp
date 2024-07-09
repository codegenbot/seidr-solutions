#include <vector>
#include <iostream>
#include <string>

std::string substitute(const std::string& cipher, const std::string& original, const std::string& message) {
    std::string result;
    for (int i = 0; i < message.length(); i++) {
        if (i >= original.length()) {
            break;
        }
        for (int j = 0; j < original.length(); j++) {
            if (original[j] == message[i]) {
                result += cipher[j];
                break;
            }
        }
    }
    return result;
}

int main() {
    std::string cipher, original, message;
    // Read input from the user
    std::cin >> cipher >> original >> message;

    // Call the substitute function to get the deciphered message
    std::cout << substitute(cipher, original, message) << std::endl;

    return 0;
}