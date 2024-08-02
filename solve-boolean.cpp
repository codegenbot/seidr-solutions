#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    int lastWasOperator = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            result = true;
            lastWasOperator = false;
        } else if (s[i] == 'F') {
            result = false;
            lastWasOperator = false;
        } else if (s[i] == '&') {
            lastWasOperator = true;
        } else if (s[i] == '|') {
            bool temp = result;
            result = !result;
            result = (lastWasOperator ? (!temp) : result);
            lastWasOperator = true;
        }
    }
    return result;
}

int main() {
    return 0;
}