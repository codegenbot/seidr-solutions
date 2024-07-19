#include <string>
using namespace std;

string substitutionCipher(string a, string b, string c) {
    string result = "";
    for (int i = 0; i < c.length(); i++) {
        int j;
        for (j = 0; j < a.length(); j++) {
            if (a[j] == c[i]) {
                break;
            }
        }
        if (j >= a.length()) {
            result += c[i];
        } else {
            result += b[j];
        }
    }
    return result;
}

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    cout << substitutionCipher(a, b, c) << endl;
    return 0;
}