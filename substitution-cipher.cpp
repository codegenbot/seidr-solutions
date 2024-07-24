#include <iostream>
#include <string>

std::string substitutionCipher(string cipher1, string cipher2, string message) {
    std::string result = "";
    for (char c : message) {
        if(isalpha(c)) {
            char cipherChar;
            if(isupper(c)) 
                cipherChar = toupper(cipher2[0] + tolower(c) - 'a');
            else
                cipherChar = tolower(cipher2[0] + tolower(c) - 'a');
            result += cipherChar;
        } 
        else
            result += c;
    }
    return result;
}