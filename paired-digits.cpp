```
#include <string>

int main() {
    int sum = 0;
    std::string s;
    std::cout << "Enter a string of digits: ";
    std::getline(std::cin, s);
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    std::cout << "The sum of paired digits is: " << sum << std::endl;
    return 0;
}