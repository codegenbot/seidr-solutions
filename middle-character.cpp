#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    
    int length = s.length();
    if (length % 2 == 0) {
        std::cout << "Middle characters are: " << s.substr(length / 2 - 1, 2) << std::endl;
    } else {
        std::cout << "Middle character is: " << s.substr(length / 2, 1) << std::endl;
    }
    
    return 0;
}