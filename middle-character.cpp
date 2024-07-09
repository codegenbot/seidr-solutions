#include <string>

std::string middleCharacter(std::string s) {
    int n = s.length();
    return n % 2 == 1 ? std::string{1, s[n / 2]} : s.substr((n - 1) / 2, 2);
}