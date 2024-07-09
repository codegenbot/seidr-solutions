```cpp
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string decipher(const string& cipher1, const string& cipher2, const string& message) {
    transform(cipher1.begin(), cipher1.end(), cipher1.begin(), ::tolower);
    transform(cipher2.begin(), cipher2.end(), cipher2.begin(), ::tolower);

    string result;
    for (char c : message) {
        if (c != '\n') {
            int idx = cipher1.find(tolower(c));
            if (idx != string::npos) {
                result += tolower(cipher2[idx]);
            } else {
                result += tolower(c);
            }
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    string cipher1, cipher2, message;
    cin >> cipher1 >> cipher2 >> message;
    cout << decipher(cipher1, cipher2, message) << endl;
    return 0;
}