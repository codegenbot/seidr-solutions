#include <string>

std::string middleCharacter(std::string s) {
    int length = s.length();
    std::string middle;
    if (length % 2 == 0) {
        middle = s.substr(length / 2 - 1, 2);
    } else {
        middle = s.substr(length / 2, 1);
    }
    return middle;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    std::string result = middleCharacter(s);
    std::cout << "Result: " << result << std::endl;

    return 0;
}