#include <string>
using namespace std;

string substitutionCipher(string cipher1, string cipher2, string message) {
    string result = "";
    for (int i = 0; i < message.length(); i++) {
        int j = 0;
        while (j < cipher1.length()) {
            if (message[i] == cipher1[j]) {
                result += cipher2[j];
                break;
            }
            j++;
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