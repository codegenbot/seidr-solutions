#include <string>
#include <iostream>
using namespace std;

string substitutionCipher(string key1, string key2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (i < key1.length()) {
            result += key2[stoi(to_string(i)) - stoi(to_string(0))];
        } else {
            result += message[i];
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