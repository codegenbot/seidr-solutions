#include <vector>
#include <iostream>
#include <string>

using namespace std;

string decipher(const string& cipher1, const string& cipher2, const string& message) {
    string result = "";
    for (char c : message) {
        if (c != '\n') {
            int idx = cipher1.find(c);
            if (idx != string::npos) {
                result += cipher2[idx];
            } else {
                result += c;
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