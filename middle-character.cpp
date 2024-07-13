#include <string>
#include <iostream>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0) {
        return s.substr(len/2 - 1, 2);
    } else {
        return s.substr(len/2, 1);
    }
}

int main() {
    std::string s = "tMUO\"9E2Ab29,;.shnOcdfOy\\ >cHq<l0e7s5GkFRhU@^h1\"qM)dM'SqXqa\\kvF3/F4YTI||*`=.FG7J0>+6#(\lW@9c,"; 
    std::cout << middleCharacter(s) << std::endl;
    return 0;
}