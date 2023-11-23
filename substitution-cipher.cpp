#include <iostream>
#include <string>
using namespace std;

string decipher(string cipher1, string cipher2, string message) {
    string deciphered_message = "";
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        int index = cipher2.find(c);
        deciphered_message += cipher1[index];
    }
    return deciphered_message;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    string deciphered_message = decipher(cipher1, cipher2, message);
    cout << deciphered_message << endl;
    return 0;
}