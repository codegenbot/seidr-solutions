#include <vector>
#include <iostream>
#include <string>

string decipher(string cipher1, string cipher2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        int index = message[i] - 'a';
        result += cipher2[index];
    }
    return result;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << decipher(cipher1, cipher2, message) << endl;
    return 0;
}