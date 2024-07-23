#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipherText, std::string key1, std::string key2) {
    string result = "";
    for(int i=0; i<cipherText.length(); i++) {
        if(key1[i] == key2[i]) {
            result += key1[i];
        } else {
            int j;
            for(j=0; j<key2.length(); j++) {
                if(key2[j] == cipherText[i]) {
                    break;
                }
            }
            result += key1[j];
        }
    }
    return result;
}

int main() {
    string text, key1, key2;
    cin >> text >> key1 >> key2;
    cout << decipher(text, key1, key2) << endl;
    return 0;
}