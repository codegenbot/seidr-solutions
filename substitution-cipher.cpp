#include <vector>
#include <iostream>
#include <string>

string decipher(string cipher1, string cipher2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (i < cipher1.length()) {
            int idx = cipher1.find(message[i]);
            if (idx != string::npos)
                result += cipher2[idx];
            else
                result += message[i]; // if not found in cipher1, just add the original char
        } else {
            result += message[i]; // if out of range, just add the original char
        }
    }
    return result;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << decipher(cipher1, cipher2, message) << endl;
    return 0;
}