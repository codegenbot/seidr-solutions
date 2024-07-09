#include <iostream>
#include <string>

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        size_t pos1 = cipher1.find(c);
        size_t pos2 = cipher2.find(c);
        
        if (pos1 != std::string::npos) {
            c = cipher2[pos1];
        } 
        else if (pos2 != std::string::npos) {
            c = cipher1[pos2];
        }
    }

    std::cout << message << std::endl;

    return 0;
}