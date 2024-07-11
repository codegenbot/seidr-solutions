```
#include <string>
using namespace std;

int sum = 0;
int pairedDigitsSum(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && s[i] == s[i + 1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}