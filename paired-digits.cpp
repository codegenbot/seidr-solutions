```c++
#include <string>

int pairedDigits(std::string s) { 
    int sum = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if ((s[i] - '0') == (s[i+1] - '0')) {
            sum += (s[i] - '0') + (s[i + 1] - '0');
        }
    }
    return sum;
}

int main() {
    std::string s = "123333";
    int result = pairedDigits(s);
    return 0;
}