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
            for (int j = 0; j < key1.length(); j++) {
                if (key1[j] == message[i]) {
                    result += key2[j];
                    break;
                }
            }
            if (result.back() != message[i])
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