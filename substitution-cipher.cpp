#include <string>
#include <map>
#include <cctype>

int main() {
    std::string cipher_map1;
    std::cin >> cipher_map1;

    std::string cipher_map2;
    std::cin >> cipher_map2;

    if(cipher_map1.length() != cipher_map2.length()) {
        return 0; // or handle the error more elegantly
    }

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
        if(isalpha(cipher_map2[i])) { 
            mapping.insert(std::make_pair(tolower(cipher_map1[i]), tolower(cipher_map2[i])));
        }
    }
    
    std::string result = "";
    for (char c : message) {
        if(mapping.find(tolower(c)) != mapping.end()) {
            char temp = mapping[tolower(c)];
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