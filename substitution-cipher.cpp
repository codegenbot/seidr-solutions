#include <string>

std::string cipher2;
std::string result(cipher2.size(), ' ');

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
            result[i] = cipher2[index];
        } else {
            result[i] = message[i];
        }
    }
    return 0;
}