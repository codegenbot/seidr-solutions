#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result = "";
    for (int i = 0; i < message.length(); i++) {
        for (int j = 0; j < cipher1.length(); j++) {
            if (message[i] == cipher1[j]) {
                result += cipher2[j];
                break;
            }
        }
    }
    return result;
}

int main() {
    std::string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << decipher(cipher1, cipher2, message) << endl;
    return 0;
}