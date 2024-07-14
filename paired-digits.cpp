```c++
#include <string>

int pairedDigits(const char* s) {
    std::string str = std::string(s); 
    int sum = 0;
    for (int i = 0; i < str.length() - 1; i++) { 
        if (str[i] == str[i+1]) {
            sum += (str[i] - '0') * 2;
        }
    }
    return sum;
}

int main() {
    const char* s = "input string of digits"; // replace with your input
    int result = pairedDigits(s);
    std::cout << result << std::endl; 
    return 0;
}