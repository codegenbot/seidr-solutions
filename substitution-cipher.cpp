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
    std::string cipher = "...";  // replace with input strings
    std::string mapping = "...";
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}