#include <string>

std::string middleCharacter(std::string s) {
    int len = s.length();
    if(len % 2 == 0) {
        return std::string(s.substr(len/2 - 1, 2)); 
    } else {
        return std::string(s.substr(len/2, 1)); 
    }
}

int main() {
    return 0;
}