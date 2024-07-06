#include <vector>
#include <iostream>
#include <string>

std::string decode(std::string cipher, std::string mapping) {
    std::size_t mappingIdx = 0;
    std::string result = "";
    for (char c : cipher) {
        char m = mapping[mappingIdx];
        result += m; // add the character from mapping to the result
        mappingIdx++; // increment the index for next iteration
    }
    return result;
}

int main() {
    std::string mapping, cipher;
    std::cin >> mapping >> cipher;
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}