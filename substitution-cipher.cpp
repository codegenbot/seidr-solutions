#include <iostream>
#include <string>
using namespace std;

string substitutionCipher(string cipher, string decipher, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        int index = cipher.find(message[i]);
        if (index != string::npos) {
            result += decipher[index];
        } else {
            result += message[i];
        }
    }
    return result;
}

int main() {
    string cipher, decipher, message;
    cin >> cipher >> decipher >> message;
    cout << substitutionCipher(cipher, decipher, message) << endl;
    return 0;
}