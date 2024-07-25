#include <vector>
#include <iostream>
#include <string>

using namespace std;

string substitutionCipher(string s1, string s2, string s3) {
    string result = "";
    for (int i = 0; i < s3.length(); i++) {
        for (int j = 0; j < s1.length(); j++) {
            if (s1[j] == s3[i]) {
                result += s2[j];
                break;
            }
        }
    }
    return result;
}

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    cout << substitutionCipher(s1, s2, s3) << endl;
    return 0;
}