```cpp
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    std::string output;
    for (char c : input) {
        char newChar = '\0';
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            int index = (c >= 'a' && c <= 'z') ? tolower(c) - 'a' : toupper(c) - 'A';
            newChar = isupper(c) ? toupper(cipherMap[index]) : tolower(cipherMap[index]);
        }
        output += (newChar == '\0') ? c : newChar;
    }
    return output;
}

int main() {
    std::string cipherMap = "abcdefghijklmnopqrstuvwxyz"; 
    std::string input = std::string("bzjyvlaopidqguscxrtwk") + 
                        "eogfmptnxqhijzkusrvld" +
                        "ijalbwwxcz";
    std::cout << substitutionCipher(cipherMap, input) << std::endl;
    return 0;
}