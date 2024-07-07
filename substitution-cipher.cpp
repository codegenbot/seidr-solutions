#include <string>
#include <iostream>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char c : cipher) {
        for(int i=0; i<mapping.length(); ++i) {
            if(mapping[i] == c) {
                result += mapping.substr(i+1, 1); 
                break;
            }
        }
    }
    return result;
}

int main() {
    std::string cipher = "...";  
    std::string mapping = "...";
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}