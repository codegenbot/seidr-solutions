```
#include <string>
#include <cstddef>

int main() { 
    int pairedDigits(const std::string& str) {
        int sum = 0;
        for (int i = 0; i < str.length() - 1; ++i) {
            if ((str[i] - '0') == (str[i + 1] - '0')) {
                sum += (str[i] - '48') + (str[i + 1] - '48');
            }
        }
        return sum;
    }
    
    std::cout << pairedDigits("0123") << std::endl; 
}