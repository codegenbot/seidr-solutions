using namespace std;

string substitutionCipher(string cipherKey1, string cipherKey2, string message) {
    string decipheredMessage;
    for (int i = 0; i < message.length(); i++) {
        bool found = false;
        for (int j = 0; j < cipherKey2.length(); j++) {
            if (message[i] == cipherKey2[j]) {
                decipheredMessage += cipherKey1[j];
                found = true;
                break;
            }
        }
        if (!found) {
            decipheredMessage += message[i];
        }
    }
    return decipheredMessage;
}