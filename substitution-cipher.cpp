#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipherMap, const std::string& input) {
    int mapIndex = 0;
    std::map<char, char> cipherTable;

    // Initialize cipher table
    for (char c : cipherMap) {
        if (mapIndex <= 'z' - 'a') { 
            cipherTable['a' + mapIndex] = c;
        } else {
            cipherTable['A' + mapIndex] = c; 
        }
        ++mapIndex;
    }

    std::string output;
    for (char c : input) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) { 
            output += cipherTable[(isupper(c)) ? toupper(c) : tolower(c)];
        } else {
            output += c; 
        }
    }
    return output;
}

int main() {
    std::string cipherMap = "abcdefghijklmnopqrstuvwxyz"; 
    std::string input = "bzjyvlaopidqguscxrtwk eogfmptnxqhijzkusrvld ijalbwwxcz";
    std::cout << substitutionCipher(cipherMap, input) << std::endl;
    return 0;
}