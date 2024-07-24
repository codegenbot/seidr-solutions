```cpp
#include <iostream>
#include <string>

std::string cipher2;
std::string result;

int main() {
    std::cin >> cipher2;
    std::string cipher1;
    std::cin >> cipher1;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string message;
    std::getline(std::cin, message);
    result = "";
    for(int i = 0; i < message.length(); i++) {
        int index = cipher1.find(message[i]);
        if(index != std::string::npos) {
            char c = cipher2.at(index);
            result.push_back(c); 
        }
    }
    std::cout << result << std::endl;
    return 0;
}