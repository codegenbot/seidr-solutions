#include <iostream>
#include <string>

using namespace std;

std::string decipher(std::string cipher_map1, std::string cipher_map2, std::string message) {
    std::string result;
    for (int i = 0; i < message.length(); i++) {
        bool found = false;
        for (int j = 0; j < cipher_map1.length(); j++) {
            if (message[i] == cipher_map1[j]) {
                result += cipher_map2[j];
                found = true;
                break;
            }
        }
        if (!found) {
            result += message[i];
        }
    }
    return result;
}

int main() {
    std::string cipher_map1, cipher_map2, message;
    cin >> cipher_map1 >> cipher_map2 >> message;
    cout << decipher(cipher_map1, cipher_map2, message) << endl;
    return 0;
}