```c
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool res = true;
    for (char c : s) {
        if (c == 'T') res = true;
        else if (c == 'F') res = false;
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