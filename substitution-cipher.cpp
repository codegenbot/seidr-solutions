```cpp
#include <string>
#include <iostream>
using namespace std;

string substitutionCipher(string key1, string key2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        if (i < key1.length()) {
            if (key1[i] == message[i]) {
                result += key2[i];
            } else {
                result += message[i];
            }
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