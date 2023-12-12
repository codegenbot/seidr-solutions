#include <iostream>
#include <string>
using namespace std;

string decipherMessage(string cipher, string plain, string message) {
    string decipheredMessage = "";
    for (char c : message) {
        int index = cipher.find(c);
        if (index != string::npos) {
            decipheredMessage += plain[index];
        } else {
            decipheredMessage += c;
        }
    }
    return decipheredMessage;
}

int main() {
    string cipher, plain, message;
    cin >> cipher >> plain >> message;
    cout << decipherMessage(cipher, plain, message) << endl;
    return 0;
}