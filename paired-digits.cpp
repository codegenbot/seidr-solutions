```cpp
#include <string>
#include <cstddef>

int pairedDigits(std::string& s) {
    int sum = 0;
    size_t i; 
    for (i = 0; i < s.size() - 1; ++i) { 
        if (s[i] == s[i + 1]) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;
}

int main() {
    std::string s;
    std::cout << "Enter a string of digits: ";
    std::cin >> s;
    int result = pairedDigits(s);
    std::cout << "The sum of the paired digits is: " << result << std::endl;
    return 0;
}