#include <iostream>

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    
    for (size_t i = 0; i < message.size(); ++i) {
        for (size_t j = 0; j < cipher1.size(); ++j) {
            if (message[i] == cipher1[j]) {
                message[i] = cipher2[j];
                break;
            }
        }
    }
    
    std::cout << message;
    
    return 0;
}