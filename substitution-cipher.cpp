#include <iostream>
#include <string>

std::string cipher2;
std::string result;

int main() {
    std::cin >> cipher2;
    std::string cipher1;
    std::cin >> cipher1;
    std::cin.ignore();
    std::string message;
    std::getline(std::cin, message);
    result = "";
    for(int i = 0; i < message.length(); i++) {
        char c = message[i];
        int index = 0;
        while(index < cipher1.length()) {
            if(c == cipher1[index]) {
                result.push_back(cipher2[index]);
                break;
            }
            index++;
        }
    }
    std::cout << result << std::endl;
    return 0;
}