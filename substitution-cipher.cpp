#include <vector>
#include <iostream>
#include <string>

string decipher(const string& key1, const string& key2, const string& message) {
    string result = "";
    for (char c : message) {
        for (int i = 0; i < key1.size(); i++) {
            if (c == key1[i]) {
                result += key2[i];
                break;
            }
        }
    }
    return result;
}

int main() {
    string key1, key2, message;
    cin >> key1 >> key2 >> message;
    cout << decipher(key1, key2, message) << endl;
    return 0;
}