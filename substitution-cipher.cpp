#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (char c : input) {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            int index = isupper(c) ? tolower(c) - 'a' : c - 'A';
            output += cipherMap.at(index);
        } else {
            output += c;
        }
    }
    return output;
}

int main() {
    std::string cipherMap = "bzjyvlaopidqguscxrtwk"; 
    std::string input = "eogfmptnxqhijzkusrvldijnalbwwxcz"; 

    std::string output = substitutionCipher(cipherMap, input);
    std::cout << output << std::endl;

    return 0;
}