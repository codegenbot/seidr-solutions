#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string of digits: ";
    std::cin >> str;
    int sum = 0;
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
    }
    std::cout << "Sum of paired digits: " << sum << std::endl;
    return 0;
}