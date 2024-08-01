#include <vector>
#include <iostream>
#include <string>

using namespace std;

string substitutionCipher(string key1, string key2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (i >= key1.length()) {
            result += message[i];
        } else {
            result += key2[(key1.find(message[i]) != string::npos) ? key1.find(message[i]) : i];
        }
    }
    return result;
}

int main() {
    string key1, key2, message;
    cin >> key1 >> key2 >> message;
    cout << substitutionCipher(key1, key2, message) << endl;
    return 0;
}