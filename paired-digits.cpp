#include <iostream>
#include <string>

int pairedDigits(const std::string& s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; ) {
        if ((int)s[i] == (int)s[i + 1]) {
            sum += (int)s[i] - 48;
            i += 2; 
        } else {
            sum += (int)s[i] - 48;
            i++;
        }
    }
    return sum;
}

int main() {
    std::string s = "123455"; 
    int result = pairedDigits(s);
    std::cout << "Sum of the digits whose following digit is the same: " << result << std::endl;
    return 0;
}