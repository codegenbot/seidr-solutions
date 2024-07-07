#include <string>
#include <iostream>

int main() {
    std::string cipher = "abc";
    std::string mapping = "xyz";
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}

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