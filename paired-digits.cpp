#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    
    int sum = 0;
    for (int i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}