#include <string>
#include <iostream>

int pairedDigits(std::string str) {
    int sum = 0;
    for(int i=0; i<str.length()-1; i++) {
        if(i < str.length() - 1 && str[i] == str[i+1]) {
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::cout << pairedDigits("1112023") << std::endl;
    return 0;
}