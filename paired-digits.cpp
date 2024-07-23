#include <string>
#include <iostream>

int pairedDigits(std::string str) {
    int sum = 0;
    for(int i=0; i<str.length(); ) { 
        while(i+1 < str.length() && str[i] == str[i+1]) { 
            sum += str[i] - '0';
            i++; // increment i to skip the same digit
        }
        i++;
    }
    return sum;
}

int main() {
    std::cout << pairedDigits("12321133") << std::endl;
    return 0;
}