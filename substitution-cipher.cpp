#include <vector>
#include <iostream>
#include <string>

std::string decode(std::string cipher, std::string mapping) {
    std::size_t mappingIdx = 0;
    for (char c : cipher) {
        char m = mapping[mappingIdx];
        result += m; 
        mappingIdx++; 
    }
    return result;
}

int main() {
    std::string mapping, cipher;
    std::cin >> mapping >> cipher;
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}