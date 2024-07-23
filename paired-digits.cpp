```c++
#include <string>
#include <iostream>

int pairedDigits(std::string str) {
    int sum = 0;
    for(int i=0; i<str.length(); i++) {
        if(i+1 < str.length() && str[i] == str[i+1]) {
            sum += str[i] - '0';
        }
    }
    return sum;

}

int main() {
    std::string input;
    printf("Enter a string of digits: ");
    getline(std::cin, input);

    int result = pairedDigits(input);
    printf("Sum of paired digits: %d\n", result);

    return 0;
}