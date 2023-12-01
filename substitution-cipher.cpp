#include <iostream>
#include <string>
using namespace std;

string substitutionCipher(string cipher, string message) {
    string decipheredMessage = "";
    for (char c : message) {
        int index = cipher.find(c);
        decipheredMessage += (index != string::npos) ? cipher[index] : c;
    }
    return decipheredMessage;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << substitutionCipher(cipher1, message) << endl;
    return 0;
}