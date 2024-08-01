#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipherText, std::string mapping) {
    string decrypted = "";
    for (char c : cipherText) {
        if (c != ' ') {
            int index = 0;
            while(mapping[index] != c && index < mapping.length()) {
                index++;
            }
            if(index >= mapping.length())
                decrypted += c;
            else
                decrypted += mapping[index];
        } else {
            decrypted += c;
        }
    }
    return decrypted;
}

int main() {
    string text1, text2, text3;
    cin >> text1 >> text2 >> text3;
    cout << decipher(text3, text1) << endl;
    return 0;
}