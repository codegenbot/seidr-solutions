#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& key1, const std::string& key2, const std::string& message) {
    std::string result;
    for (char c : message) {
        if (!isalpha(c)) {  // Handle non-alphabet characters
            result += c;  
        } else {
            char base = isupper(c) ? 'A' : 'a';
            size_t pos = 0;
            while (pos < key1.size() && key1[pos] != c - base) {
                pos++;
            }
            if (pos >= key1.size()) {  // If character is not in key, leave it as is
                result += c;  
            } else {
                result += key2[pos] + base;  // Replace with corresponding character from key2
            }
        }
    }
    return result;
}

int main() {
    std::string key1, key2, message;
    std::cin >> key1 >> key2 >> message;
    std::cout << substitutionCipher(key1, key2, message) << std::endl;
    return 0;
}