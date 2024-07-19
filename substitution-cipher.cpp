#include <string>
using namespace std;

string substitutionCipher(string &cipherKey1, string &cipherKey2, string &input) {
    string output;
    for (int i = 0; i < input.length(); i++) {
        if (i >= cipherKey1.length()) {
            output += input[i];
        } else {
            int index = -1;
            for (int j = 0; j < cipherKey2.length(); j++) {
                if (cipherKey1[j] == input[i]) {
                    index = j;
                    break;
                }
            }
            if (index != -1) {
                output += cipherKey2[index];
            } else {
                output += input[i];
            }
        }
    }
    return output;
}

int main() {
    string cipherKey1, cipherKey2, input;
    cin >> cipherKey1 >> cipherKey2 >> input;
    cout << substitutionCipher(cipherKey1, cipherKey2, input) << endl;
    return 0;
}