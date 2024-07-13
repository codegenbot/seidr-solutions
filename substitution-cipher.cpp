#include <vector>
#include <iostream>
#include <string>

std::string applySubstitutionCipher(std::string key1, std::string key2, std::string message) {
    std::string result = "";
    
    for (char c : message) {
        if (c != '\0') {
            int index = key1.find(c);
            if (index != -1) {
                result += key2[index];
            } else {
                result += c;
            }
        } else {
            result += ' ';
        }
    }

    return result;
}

int main() {
    std::string key1, key2, message;
    
    // Read input from user
    cin >> key1 >> key2 >> message;

    std::cout << applySubstitutionCipher(key1, key2, message) << endl;

    return 0;
}