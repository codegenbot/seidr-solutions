#include <iostream>
#include <string>
using namespace std;

string substitutionCipher(string cipher, string decipher, string message) {
    string result = "";
    for (char c : message) {
        int index = cipher.find(c);
        if (index != string::npos) {
            result += decipher[index];
        } else {
            result += c;
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