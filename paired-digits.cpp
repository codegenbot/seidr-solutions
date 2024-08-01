#include <vector>
#include <iostream>
#include <string>

int pairedDigits(std::string str) {
    int sum = 0;
    for(int i=0; i<str.length()-1; i++){
        if(str[i] == str[i+1]){
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main() {
    std::cout << "Enter a string of digits: ";
    std::string str;
    std::cin >> str;
    std::cout << "Paired digit sum: " << pairedDigits(str) << std::endl;
    return 0;
}