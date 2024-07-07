#include <string>
#include <iostream>
#include <algorithm>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (auto p : zip(cipher.begin(), mapping.begin())) {
        result.push_back(p.second); 
    }
    return result;
}

int main() {
    std::string cipher = "cehubtgxnspvqohlwrzady";
    std::string mapping = "vmrbxneukctiflzswjpqdyyvogsnul";
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}