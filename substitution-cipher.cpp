#include <string>
#include <iostream>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char c : cipher) {
        int idx = mapping.find(c);
        if (idx != std::string::npos) {
            char m = mapping[idx];
            result += m;
        } else {
            result += c; 
        }
    }
    return result;
}

int main() {
    std::string cipher = "Hello";  // sample input
    std::string mapping = "abcdefghijklmnopqrstuvwxyz";  // sample input
    std::cout << decode(cipher, mapping) << std::endl;  // execute the function
    return 0;
}