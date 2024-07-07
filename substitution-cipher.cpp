#include <string>
#include <iostream>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char m : mapping) {
        int idx = mapping.find(m);
        if (idx != std::string::npos) {
            result.push_back(cipher[idx]); 
        } else {
            result.push_back(m); 
        }
    }
    return result;
}

int main() {
    std::string cipher = "cehubtgxnspvqohlwrzady";
    std::string mapping = "vmrbxneukctiflzswjpqdyyvogsnul";
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;}