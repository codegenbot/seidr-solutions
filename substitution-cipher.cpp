#include <iostream>
#include <string>

std::string cipher2;
std::string result = "";

int main() {
    std::cin >> cipher2;
    std::string cipher1;
    std::cin >> cipher1;
    std::cin.ignore();
    std::string message;
    std::getline(std::cin, message);
    for(int i = 0; i < message.length(); i++) {
        int index = cipher1.find(message[i]);
        if(index != std::string::npos) {
            char c = cipher2[index];
            if(c != ' ') {
                result += c;
            } else {
                result += message[i]; 
            }
        } else {
            result += message[i]; 
        }
    }
    std::cout << result << std::endl;
    return 0;
}