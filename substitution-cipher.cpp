```cpp
#include <string>
#include <iostream>

std::string decode(std::string cipher, std::string mapping) {
    std::string result = "";
    for (char c : cipher) {
        int idx = 0;
        char decoded_char = ' ';
        while(idx<mapping.size() && decoded_char == ' ') {
            if(c==mapping[idx]) 
                decoded_char = c; 
            idx++;
        }
        if(decoded_char!=' ') 
            result.push_back(decoded_char); 
        else 
            result.push_back(c); 
    }
    return result;
}

int main() {
    std::string cipher = "cehubtgxnspvqohlwrzady";
    std::string mapping = "vmrbxneukctiflzswjpqdyyvogsnul";
    std::cout << decode(cipher, mapping) << std::endl;
    return 0;
}