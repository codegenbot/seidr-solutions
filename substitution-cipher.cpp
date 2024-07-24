```#include <string>
string cipher(string cipher1, string cipher2, string input) {
    string result = "";
    for (char c : input) {
        size_t pos = cipher2.find(std::tolower(c)); 
        if (pos != std::string::npos) {
            char decrypted_char = cipher1.at(pos);
            result += decrypted_char;
        } else {
            result += c; 
        }
    }
    return result;
}``