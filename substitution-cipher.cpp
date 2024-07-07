#include <string>
#include <iostream>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    int index = 0;
    for (char c : cipher) {
        while (index < mapping.size() && mapping[index] != c) {
            ++index;
        }
        if (index >= mapping.size()) {
            result += c; 
        } else {
            result += mapping[index]; 
            index++;
        }
    }
    return result;
}

int main() {
    std::string cipher = "cehubtgxnspvqohlwrzady";
    std::string mapping = "vmrbxneukctiflzswjpqdyyvogsnul";
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}