#include <string>

string decipher(string cipher1, string cipher2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        int j;
        for (j = 0; j < cipher1.length(); j++) {
            if (message[i] == cipher1[j]) {
                break;
            }
        }
        result += cipher2[j];
    }
    return result;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << decipher(cipher1, cipher2, message) << endl;
    return 0;
}