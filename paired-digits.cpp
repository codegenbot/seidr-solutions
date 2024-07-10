#include <string>

int main() {
    std::string str;
    std::cout << "Enter a string of digits: ";
    std::cin >> str;
    int sum = pairedDigits(str);
    std::cout << "Sum of the digits whose following digit is the same: " << sum << std::endl;
    return 0;

}

int pairedDigits(const std::string& str) {
    int sum = 0;
    for (int i = 0; i < str.size() - 1; i++) {
        if (str[i] == str[i + 1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}