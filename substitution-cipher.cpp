#include <iostream>
#include <string>

int main() {
    std::string cipher1, cipher2, text;
    std::cin >> cipher1 >> cipher2 >> text;
    
    for (char &c : text) {
        for (size_t i = 0; i < cipher1.size(); ++i) {
            if (c == cipher1[i]) {
                c = cipher2[i];
                break;
            }
        }
    }
    
    std::cout << text << std::endl;
    
    return 0;
}