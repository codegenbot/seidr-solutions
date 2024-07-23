```c++
#include <iostream>
#include <string>

int pairedDigits(std::string str) {
    int sum = 0;
    int i = 0;
    while(i < str.length()) {
        if(i+1 < str.length() && str[i] == str[i+1]) {
            sum += str[i] - '0';
        }
        i++;
    }
    return sum;

}

int main() {
    std::string input;
    printf("Enter a string of digits: ");
    std::cin >> input;

    int result = pairedDigits(input);
    printf("Sum of paired digits: %d\n", result);

    return 0; }