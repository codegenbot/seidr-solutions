#include <unordered_map>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    std::unordered_map<char, char> substitutions;
    for (int i = 0; i < cipher1.length(); i++) {
        substitutions[cipher1[i]] = cipher2[i];
    }
    
    std::string result;
    for (char c : message) {
        if (substitutions.count(c)) {
            result += substitutions.at(c);
        } else {
            result += c;  
        }
    }
    
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    std::cin >> cipher1 >> cipher2 >> message;
    std::cout << substitutionCipher(cipher1, cipher2, message) << std::endl;
    return 0;
}