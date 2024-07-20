```cpp
#include <string>
#include <map>
#include <cctype>

int main() {
    std::string cipher_map1;
    std::cin >> cipher_map1;

    std::string cipher_map2;
    std::cin >> cipher_map2;

    std::string message;
    std::cin >> message;

    std::string result = decipher(cipher_map1, cipher_map2, message);
    std::cout << result << std::endl;
    return 0;
}

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    if(cipher_map1.length() != cipher_map2.length()) {
        return "";
    }
    
    std::map<char, char> mapping;
    for (int i = 0; i < std::min(cipher_map1.length(), cipher_map2.length()); i++) {
        mapping.insert({tolower(cipher_map1[i]), tolower(cipher_map2[i])});
        mapping.insert({toupper(cipher_map1[i]), toupper(cipher_map2[i])});
    }
    
    std::string result = "";
    for (char c : message) {
        auto it = mapping.find(tolower(c));
        if (it != mapping.end()) {
            char temp = it->second;
            // Check if the original character was uppercase or lowercase
            if (isupper(c))
                result += toupper(temp);
            else
                result += tolower(temp);
        } else {
            result += c; 
        }
    }
    return result;
}