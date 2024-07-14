#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (char c : message) {
        char lookup = tolower(c); // Convert c to lowercase
        if (lookup >= 'a' && lookup <= 'z') { 
            int index = 0;
            while (index < cipher1.length() && lookup != tolower(cipher1[index])) {
                index++;
            }
            if (index < cipher1.length()) {
                result += tolower(cipher2[index]); // Convert the character in cipher2 to lowercase
            } else {
                result += c; 
            }
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