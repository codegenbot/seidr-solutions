#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    string result = "";
    for (char c : message) {
        for (int i = 0; i < cipher_map1.length(); i++) {
            if (c == cipher_map1[i]) {
                result += cipher_map2[i];
                break;
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