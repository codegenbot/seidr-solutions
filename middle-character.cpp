#include <string>
using namespace std;

string middleCharacter(string s) {
    int n = s.length();
    if (n % 2 != 0) {
        return string(1, s[n / 2]);
    } else {
        return string(2, s[(n - 1) / 2]) + s[n / 2];
    }
}