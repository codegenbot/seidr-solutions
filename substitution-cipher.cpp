#include <string>

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