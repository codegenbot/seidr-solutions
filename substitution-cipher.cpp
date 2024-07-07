#include <string>
#include <iostream>
#include <unordered_map>

std::string decode(std::string cipher, std::string mapping) {
    std::unordered_map<char, char> map;
    for (int i = 0; i < mapping.size(); i++) {
        map[mapping[i]] = cipher[i];
    }
    
    std::string result = "";
    for (char c : cipher) {
        if (map.find(c) != map.end()) {
            result += map[c]; 
        } else {
            result += c; 
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