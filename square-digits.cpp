```c++
#include <string>

int main() {
    std::string n = "123";
    std::string result = "";
    for (char c : n) {
        int digit = c - '0';
        result += std::to_string(digit * digit);
    }
    return 0;
}