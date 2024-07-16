```
#include <string>

using namespace std;

int main() {
    int sum = pairedDigits("123456");
    cout << "The sum of the digits whose following digit is the same is: " << sum;
    return 0;
}

int pairedDigits(string s) {
    int sum = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if ((s[i] - '0') == (s[i+1] - '0')) {
            sum += (s[i] - '0') * 2;
        }
    }
    return sum;
}