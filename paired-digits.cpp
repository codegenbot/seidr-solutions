```c++
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if ((s[i] - '0') == (s[i+1] - '0')) {
            sum += (s[i] - '0');
        }
    }
    return sum;
}

int main() {
    std::cout << "Enter a string of digits: ";
    std::string s;
    std::getline(std::cin, s);
    int output = pairedDigits(s);
    std::cout << "Sum of paired digits is: " << output << std::endl;
    std::cout << "Program has finished." << std::endl;
}