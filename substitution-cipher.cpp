#include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    
    // Create a map to store the cipher
    unordered_map<char, char> cipherMap;
    for (int i = 0; i < cipher1.size(); i++) {
        if (!cipherMap.count(cipher1[i])) {
            cipherMap[cipher1[i]] = cipher2[i];
        }
    }
    
    // Apply the cipher to the message
    string decipheredMessage;
    for (int i = 0; i < message.size(); i++) {
        if (cipherMap.count(message[i])) {
            decipheredMessage += cipherMap[message[i]];
        } else {
            // If the character is not present in the cipher, return it as-is
            decipheredMessage += message[i];
        }
    }
    
    // Return the deciphered message
    cout << decipheredMessage;
    
    return 0;
}