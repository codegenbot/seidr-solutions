#include <iostream>
#include <string>

int main() {
    std::string cipher2;
    std::cin >> cipher2;
    std::string cipher1;
    std::cin >> cipher1;
    std::string message;
    std::getline(std::cin, message);

    std::string result;
    for(int i = 0; i < message.length(); i++) {
        char c = std::tolower(message[i]);
        if(c != ' ') { 
            for (int j = 0; j < cipher1.length(); j++) {
                if(c == cipher1[j]) {
                    result += cipher2[j];
                    break;
                } else {
                    result += c;
                }
            }
        } else {
            result += c;  
        }
    }
    std::cout << result.c_str() << std::endl;
    return 0;
}