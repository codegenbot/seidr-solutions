#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    int length = s.length();
    if (length % 2 == 0) {
        std::cout << "The two middle characters are: " << s.substr(length / 2 - 1, 2) << std::endl;
    } else {
        std::cout << "The middle character is: " << s.substr(length / 2, 1) << std::endl;
    }
    return 0;
}