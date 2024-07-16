#include <string>
#include <iostream>

std::string cipher(std::string cipher1, std::string cipher2, std::string message) {
    if (cipher1.length() != cipher2.length()) {
        throw "";
    }

    std::string table = "";
    for (int i = 0; i < cipher1.length(); i++) {
        table += cipher1[i];
        table += cipher2[i];
    }

    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            result += table[index*2]; 
        }
        else if (c >= 'A' && c <= 'Z') {
            int index = c - 'A';
            result += toupper(table[index*2]); 
        }
        else {
            result += message[i];  
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    try {
        std::cout << cipher(cipher1, cipher2, message) << std::endl;
    } catch (const char* e) {
        std::cerr << "Error: " << e << std::endl;
    }
    return 0;
}