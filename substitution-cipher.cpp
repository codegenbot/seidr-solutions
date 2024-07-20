```c
#include <map>
#include <string>
#include <iostream>

using namespace std;

string decipher(string cipher_map1, string cipher_map2, string message) {
    map<char, char> mapping;
    for (int i = 0; i < min(cipher_map1.length(), cipher_map2.length()); i++) {
        mapping[std::tolower(cipher_map1[i])] = std::tolower(cipher_map2[i]);
        mapping[toupper(cipher_map1[i])] = toupper(cipher_map2[i]);
    }
    
    string result = "";
    for (char c : message) {
        if(mapping.find(std::tolower(c)) != mapping.end()) {
            // If character is found in the map, substitute with corresponding value from the map
            result += mapping.at(std::tolower(c));
        } else {
            // If character is not found in the map, add it as it is to the result
            result += c; 
        }
    }
    return result;
}

int main() {
    char cipher_map1[256], cipher_map2[256], message[256];
    cout << "Enter the first string: ";
    cin.getline(cipher_map1, 256);
    cout << "Enter the second string: ";
    cin.getline(cipher_map2, 256);
    cout << "Enter the message to decipher: ";
    cin.getline(message, 256);
    cout << "Deciphered message: " << decipher(string(cipher_map1), string(cipher_map2), string(message)) << endl;
    return 0; 
}