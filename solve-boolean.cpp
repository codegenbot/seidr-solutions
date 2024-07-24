```cpp
#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (char c : s) {
        if (c == 'T' || c == 't') {
            continue;
        } else if (c == 'F' || c == 'f') {
            return false;
        } else if (c == '&') {
            result &= true;
        } else if (c == '|') {
            bool temp = result;
            result = false;
            result |= temp;
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a Boolean expression (T/F/|&): ";
    cin >> s;

    bool result = solveBoolean(s);
    if(result)
        cout << "Result: TRUE" << endl;
    else
        cout << "Result: FALSE" << endl;

    return 0;
}