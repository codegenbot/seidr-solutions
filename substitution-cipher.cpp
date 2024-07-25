```c++
#include <string>

std::string substitutionCipher(std::string cipherKey1, std::string cipherKey2, std::string message) {
    std::string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        if (message[i] != ' ') {
            int index = 0;
            while (index < cipherKey1.length()) {
                if (message[i] == cipherKey1[index]) {
                    decipheredMessage += cipherKey2[index];
                    break;
                }
                index++;
            }
        } else {
            decipheredMessage += ' ';
        }
    }
    return decipheredMessage;
}

int main() {
    std::string cipherKey1 = "abc";  // replace with your input strings
    std::string cipherKey2 = "def";
    std::string message = "ghi";
    std::cout << substitutionCipher(cipherKey1, cipherKey2, message) << std::endl;
    return 0;
}