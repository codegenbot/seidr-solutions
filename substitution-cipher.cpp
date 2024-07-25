#include <iostream>
#include <string>
using namespace std;

string substitutionCipher(string cipherKey1, string cipherKey2, string message) {
    string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        bool found = false;
        int j = 0;
        while(j < cipherKey2.length() && !found) {
            if(cipherKey2[j] == message[i]) {
                decipheredMessage += cipherKey1[j];
                found = true;
            }
            j++;
        }
        if(!found) {
            decipheredMessage += message[i];
        }
    }
    return decipheredMessage;
}