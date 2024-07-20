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
    std::map<char, char> mapping(cipher_map1.begin(), cipher_map1.end());
    
    std::string result = "";
    for (char c : message) {
        if(mapping.find(tolower(c)) != mapping.end()) {
            char temp = mapping[std::tolower(c)];
            // Check if the original character was uppercase or lowercase
            if(std::isupper(c))
                result += std::toupper(temp);
            else
                result += std::tolower(temp);
        } else {
            result += c; 
        }
    }
    return result;
}