#include <iostream>
#include <string>

int pairedDigits(const char* s) {
    int sum = 0;
    for (int i = 0; ; i++) {
        if (!s[i]) break;
        if ((i+1) < strlen((char*)s) && (s[i] - '0' == s[i+1] - '0')) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;
}

int main() {
    std::string s;
    std::cin >> s; 
    int result = pairedDigits(s.c_str());
    std::cout << "Result: " << result << std::endl;
    return 0;
}