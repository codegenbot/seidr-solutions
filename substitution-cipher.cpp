#include <iostream>
#include <string>

using namespace std;

string decipher(string cipherText, string key) {
    int index = 0;
    string decrypted = "";
    
    for (char c : cipherText) {
        if (index >= key.length()) {
            index = 0; // Reset the index when it exceeds the length of the key
        }
        
        char ch = key[index];
        
        while (!(ch == c)) {
            index++;
            
            if (index >= key.length()) {
                index = 0;
            }
            
            ch = key[index];
        }
        
        decrypted += ch;
        index++;
    }
    
    return decrypted;
}

int main() {
    string key, cipherText, plainText;
    
    cout << "Enter the first string: ";
    cin >> key;
    cout << "Enter the second string: ";
    cin >> cipherText;
    cout << "Enter the third string: ";
    cin >> plainText;
    
    cout << "Decrypted message: " << decipher(cipherText, key) << endl;
    
    return 0;
}