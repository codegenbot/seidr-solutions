#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (cipher_map1[i] == cipher_map2[i]) {
            result += cipher_map2[i];
        } else {
            int j = 0;
            while (j < cipher_map1.length() && cipher_map1[j] != cipher_map2[i]) {
                j++;
            }
            if (j < cipher_map1.length()) {
                result += cipher_map2[j];
            } else {
                result += cipher_map2[cipher_map2.length()-1];
            }
        }
    }
    return result;
}

int main() {
    string cipher_map1, cipher_map2, message;
    cin >> cipher_map1 >> cipher_map2 >> message;
    cout << decipher(cipher_map1, cipher_map2, message) << endl;
    return 0;
}