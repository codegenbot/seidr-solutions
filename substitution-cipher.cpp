#include <iostream>
#include <string>

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;

    for (char &c : message) {
        for (int i = 0; i < cipher1.size(); ++i) {
            if (c == cipher2[i]) {
                c = cipher1[i];
                break;
            } else if (c == cipher1[i]) {
                c = cipher2[i];
                break;
            }
        }
    }

    std::cout << message << std::endl;

    return 0;
}