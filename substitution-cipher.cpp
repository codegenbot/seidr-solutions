#include <iostream>
#include <string>
using namespace std;

string substitutionCipher(string cipher, string message) {
    string decipheredMessage = "";
    for (int i = 0; i < message.length(); i++) {
        int index = cipher.find(message[i]);
        decipheredMessage += cipher[index];
    }
    return decipheredMessage;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << substitutionCipher(cipher1, message) << endl;
    return 0;
}