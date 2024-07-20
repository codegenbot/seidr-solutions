```c++
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
    for (int j = 0; j < cipher_map1.length(); j++) {
        mapping[std::tolower(cipher_map1[j])] = std::tolower(cipher_map2[j]);
    }
    
    std::string result = "";
    for (char c : message) {
        if(mapping.find(std::tolower(c)) != mapping.end()) {
            char temp = mapping[std::tolower(c)];
            // Check if the original character was uppercase or lowercase
            if(isupper(c))
                result += toupper(temp);
            else
                result += tolower(temp);
        } else {
            result += c; 
        }
    }
    return result;
}