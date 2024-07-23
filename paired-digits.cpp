```cpp
#include <string>

int pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    char buffer[1024]; 
    std::cin >> std::setw(0) >> buffer; 
    std::string s = buffer;
    int result = pairedDigits(s);
    std::cout << "The sum of the paired digits is: " << result << std::endl;
    return 0;
}