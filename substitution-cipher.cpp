#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipherText, std::string key) {
    int n = cipherText.length();
    string deciphered = "";

    for (int i = 0; i < n; i++) {
        deciphered += key[i];
    }

    return deciphered;
}

int main() {
    std::string cipherText1, cipherText2, text;
    std::cout << "Enter the first string: ";
    std::cin >> cipherText1;
    std::cout << "Enter the second string: ";
    std::cin >> cipherText2;
    std::cout << "Enter the third string: ";
    std::cin >> text;

    std::string result = decipher(text, cipherText1);
    std::cout << "Deciphered message: " << result << std::endl;

    return 0;
}