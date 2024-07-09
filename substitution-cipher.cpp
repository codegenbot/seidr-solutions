#include <vector>
#include <iostream>
#include <string>

std::string substitutionCipher(std::string s1, std::string s2, std::string s3) {
    string result = "";
    for (int i = 0; i < s3.length(); i++) {
        if (i >= s1.length()) {
            result += s2[i % s2.length()];
        } else {
            result += s2[s1.find(s3[i])];
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