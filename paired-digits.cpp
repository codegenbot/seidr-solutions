```c++
#include <string>
#include <iostream>

int pairedDigits(std::string str) {
    int sum = 0;
    for(int i=0; i<str.length()-1; i++) {
        if(str[i] == str[i+1]) {
            sum += (str[i] - '0');
        }
    }
    return sum;
}

int main() {
    std::string str;
    std::cout << "Enter a string of digits: ";
    std::cin >> str;
    int result = pairedDigits(str);
    std::cout << "The sum of the digits whose following digit is the same is: " << result << std::endl;
    return 0;
}