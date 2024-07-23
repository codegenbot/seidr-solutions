```cpp
#include <iostream>
#include <string>
using namespace std;

string substitutionCipher(string cipher1, string cipher2, string input) {
    string result;
    for (char c : input) {
        if (c == '\0') {
            break; 
        }
        size_t pos = cipher2.find(std::tolower(c)); 
        if (pos != std::string::npos) {
            result += cipher1[pos]; 
        } else {
            char originalCase = (std::isupper(c)) ? std::toupper(c) : std::tolower(c);
            size_t pos2 = cipher1.find(originalCase); 
            if (pos2 != std::string::npos) {
                result += originalCase; 
            } else {
                result += c; 
            }
        }
    }
    return result;
}

int main() {
    string cipher1, cipher2, input;
    cout << "Enter cipher1: ";
    cin >> cipher1;
    cout << "Enter cipher2: ";
    cin >> cipher2;
    cout << "Enter the message to be deciphered: ";
    cin >> input;
    
    cout << "Deciphered message: " << substitutionCipher(cipher1, cipher2, input) << endl;
    return 0;
}