#include <string>
using namespace std;

string substituteCipher(string key1, string key2, string input) {
    string result = "";
    for(int i=0; i<input.length(); i++) {
        if(i >= key1.length()) {
            result += input[i];
        } else {
            int index = 0;
            for(int j=0; j<key1.length(); j++) {
                if(key1[j] == input[i]) {
                    index = j;
                    break;
                }
            }
            result += key2[index];
        }
    }
    return result;
}

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    cout << substituteCipher(s1, s2, s3);
    return 0;
}