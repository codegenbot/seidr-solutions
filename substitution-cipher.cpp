```cpp
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (char c : input) {
        char newChar = '\0';
        if (c >= 'a' && c <= 'z') {
            int index = c - 'a';
            newChar = cipherMap[index];
        } else if (c >= 'A' && c <= 'Z') {
            int index = c - 'A';
            newChar = toupper(cipherMap[index] - ('A' - 'a'));
        }
        output += (newChar == '\0') ? c : newChar;
    }
    return std::string(output);
}

int main() {
    std::string cipherMap = "abcdefghijklmnopqrstuvwxyz"; 
    std::string input = "bzjyvlaopidqguscxrtwk" + 
                        "eogfmptnxqhijzkusrvld" +
                        "ijalbwwxcz";
    std::cout << std::string(substitutionCipher(cipherMap, input)) << std::endl;

    return 0;
}