#include <iostream>
#include <string>

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    for (char &c : message) {
        size_t index = cipher2.find(c);
        if (index != std::string::npos) {
            c = cipher1[index];
        }
    }
    std::cout << message << std::endl;
    return 0;
}