#include <cstring>
#include <iostream>

int pairedDigits(const char* s) {
    int sum = 0;
    for (int i = 0; i <= strlen(s); i++) {
        if ((i < strlen(s) - 1 ? (s[i] == s[i + 1]) : s[i] == s[i])) { 
            sum += (s[i] - '0'); 
        }
    }
    return sum;
}

int main() {
    const char* s = new char[100]; // assuming maximum length of string is 99 characters
    std::cin >> s;

    int result = pairedDigits(s);
    std::cout << "Sum of the digits whose following digit is the same: " << result << std::endl;

    return 0;
}