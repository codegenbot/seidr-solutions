    #include <iostream>
#include <string>
using namespace std;

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;

    for (int i = 0; i < message.size(); i++) {
        int index = cipher1.find_first_of(message[i], 0);
        if (index != string::npos) {
            cout << decipher(cipher2, index);
        } else {
            cout << message[i];
        }
    }
}

string decipher(const string& cipher, int index) {
    return cipher.substr(index, 1);
}