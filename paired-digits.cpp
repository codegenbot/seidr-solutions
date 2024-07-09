```c
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            sum += (s[i] - '0') + (s[i-1] - '0');
            if(sum > 9) return -1;
        }
    }
    return sum;

}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    const std::string& in = input; // Fix
    std::getline(std::cin, in);
    int result = pairedDigits(in);
    std::cout << "Sum of paired digits: " << result << std::endl;
    return 0;
}