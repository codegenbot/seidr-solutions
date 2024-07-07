#include <string>
#include <iostream>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char c : cipher) {
        int idx = 0;
        while(idx<mapping.length() && map_idx!=mapping.find(c))
            idx++;
        if(idx<mapping.length())
            char decoded_char = mapping[idx]; 
            result.push_back(decoded_char); 
        } else {
            result.push_back(c); 
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