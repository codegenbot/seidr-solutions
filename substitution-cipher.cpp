#include <vector>
#include <iostream>
#include <string>

using namespace std;

string decipher(const string& cipher_map, const string& message) {
    string deciphered_message;
    for (char c : message) {
        char mapped_char = c;
        for (int i = 0; i < cipher_map.length(); i++) {
            if (cipher_map[i] == c) {
                mapped_char = cipher_map[i];
                break;
            }
        }
        deciphered_message += mapped_char;
    }
    return deciphered_message;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << decipher(cipher1 + cipher2, message) << endl;
    return 0;
}