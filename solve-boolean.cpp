#include <string>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    bool result = true;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'F') {
            result = false;
            break;
        } else if (s[i] == 'T') {
            continue;
        } else if (s[i] == '|') {
            result = true;
            break;
        } else if (s[i] == '&') {
            result = false;
            break;
        }
    }
    cout << boolalpha << result << endl;
    return 0;
}