#include <string>
using namespace std;

string decipherMessage(const string &cipherKey1, const string &cipherKey2, const string &message) {
    string decipheredMessage;
    
    for (char c : message) {
        if (c == '\n') {
            decipheredMessage += '\n';
        } else {
            int idx = cipherKey1.find(c);
            if (idx != string::npos) {
                decipheredMessage += cipherKey2[idx];
            } else {
                decipheredMessage += c;
            }
        }
    }
    
    return decipheredMessage;
}

int main() {
    string cipherKey1, cipherKey2, message;
    cin >> cipherKey1 >> cipherKey2 >> message;
    cout << decipherMessage(cipherKey1, cipherKey2, message) << endl;
    return 0;
}