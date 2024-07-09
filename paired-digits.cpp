```c
#include <string>

int* pairedDigits(std::string s) {
    int sum = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            sum += (s[i] - '0') + (s[i-1] - '0');
            if(sum > 9) return new int(-1);
        }
    }
    delete result; // Don't forget to clean up the memory!
    return new int(sum);

}

int main() {
    std::string input;
    std::cout << "Enter a string of digits: ";
    std::cin >> input;  
    int* result = pairedDigits(input);
    if(*result == -1) {
        std::cout << "Error! Sum exceeds 9." << std::endl;
    } else {
        std::cout << "Sum of paired digits: " << *result << std::endl;
    }
    delete result; // Don't forget to clean up the memory!
    return 0;
}