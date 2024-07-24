#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'f') res = false;
        else if (c == '&') continue;
        else if (c == '|') return !res;
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    cout << boolalpha << solveBoolean(s) << endl;
    return 0;
}