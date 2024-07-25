#include <vector>
#include <iostream>
#include <string>
using namespace std;

string substitutionCipher(string cipher1, string cipher2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        int index = message[i] - 'a';
        if (index >= 0 && index < cipher1.length()) {
            result += cipher2[index];
        } else {
            result += message[i];
        }
    }
    return result;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << substitutionCipher(cipher1, cipher2, message) << endl;
    return 0;
}