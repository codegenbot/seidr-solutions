```c++
#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(const std::string& cipher1, const std::string& cipher2, const std::string& input) {
    std::string result;
    for (char c : input) {
        if (c == '\0') {
            break; // if the end of string is reached
        }
        size_t pos = cipher2.find(std::tolower(c)); // convert to lowercase
        if (pos != std::string::npos) {
            result += cipher1[pos]; // substitute with corresponding character in cipher1, also converted to lowercase
        } else if (std::isalpha(c)) {
            char originalCase = (std::isupper(c)) ? std::toupper(c) : std::tolower(c);
            size_t pos2 = cipher1.find(originalCase); // find the original case character in cipher1
            if (pos2 != std::string::npos) {
                result += originalCase; // substitute with the corresponding character in cipher1, preserving the original case
            } else {
                result += c; // if not found, add as it is
            }
        } else {
            result += c; // if not a letter, add as it is
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, input;
    getline(stdcin," "); // skip spaces in input
    getline(stdcin,cipher1);
    getline(stdcin,cipher2);
    getline(getline(cin, input),"\0"); // read until non-whitespace character is encountered
    cout << substitutionCipher(cipher1 + " ", cipher2 + " ", input) << endl;
    return 0;
}