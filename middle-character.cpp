```c++
#include <string>

std::string middleCharacter(std::string s) {
    int length = s.length();
    std::string middle = s.substr(length % 2 == 0 ? length / 2 - 1 : length / 2, length % 2 == 0 ? 2 : 1);
    if (length % 2 == 0) {
        return middle;
    } else {
        return middle;
    }
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    std::string result = middleCharacter(s);
    std::cout << "Result: " << result << std::endl;

    return 0;
}