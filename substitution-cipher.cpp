#include <vector>
#include <iostream>
#include <string>

std::string solve(const std::string& cipher1, const std::string& cipher2, const std::string& message) {
    string deciphered;
    for (int i = 0; i < message.length(); ++i) {
        if (i >= cipher1.length()) {
            deciphered += message[i];
        } else {
            deciphered += cipher2[cipher1.find(message[i])];
        }
    }
    return deciphered;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << solve(cipher1, cipher2, message) << endl;
    return 0;
}