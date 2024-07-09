#include <string>
using namespace std;

string substitutionCipher(string cipherKey1, string cipherKey2, string message) {
    string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        if (cipherKey1[i] != '\0' && cipherKey2[i] != '\0') {
            decipheredMessage += cipherKey2[i];
        } else {
            decipheredMessage += message[i];
        }
    }
    return decipheredMessage;
}

int main() {
    string cipherKey1, cipherKey2, message;
    cin >> cipherKey1 >> cipherKey2 >> message;
    cout << substitutionCipher(cipherKey1, cipherKey2, message) << endl;
    return 0;
}