```cpp
#include <string>
#include <iostream>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char m : mapping) {
        for (size_t i = 0; i < mapping.length(); ++i) {
            if (mapping[i] == m) {
                result.push_back(cipher[i % cipher.length()]); 
                break;
            }
        } 
    }
    return result;
}

int main() {
    std::string cipher = "cehubtgxnspvqohlwrzady";
    std::string mapping = "vmrbxneukctiflzswjpqdyyvogsnul";
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;