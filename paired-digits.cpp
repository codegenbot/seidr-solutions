```c++
#include <iostream>
#include <string>

int pairedDigits(const std::string& s) {
    int sum = 0;
    for (char c : s) {
        if ((s.find(c) != std::string::npos && s.find(std::to_string(c) + c) != std::string::npos)) {
            sum += (c - '0');
        }
    }
    return sum;

}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;
    int result = pairedDigits(input);
    std::cout << "Sum of paired digits is: " << result << std::endl;
    return 0;
}