#include <iostream>

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        size_t pos = cipher1.find(c);
        if (pos != std::string::npos) {
            c = cipher2[pos];
        }
    }

    std::cout << message << std::endl;

    return 0;
}