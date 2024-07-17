#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = false;
    for (char c : s) {
        if (c == 'T') res = true;
        else if (c == 'F') break;
        else if (c == '|') res = !res;
        else if (c == '&') res &= true;
    }
    return res;
}

int main() {
    string input;
    cin >> input;
    bool result = solveBoolean(input);
    cout << (result ? "TRUE" : "FALSE") << endl;
    return 0;
}