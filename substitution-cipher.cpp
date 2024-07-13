#include <vector>
#include <iostream>
#include <string>

std::string decipher(std::string cipher1, std::string cipher2, std::string message) {
    std::string result;
    for (int i = 0; i < message.length(); i++) {
        int index = 0;
        while (index < cipher1.length() && message[i] != cipher1[index]) {
            index++;
        }
        if (index >= cipher2.length()) {
            result += '?';
        } else {
            result += cipher2[index];
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