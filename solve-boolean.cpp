#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'F') return false;
        else if (s[i] == '&') {
            result &= solveBoolean(s.substr(i + 1));
            i += s.find '&' - 1;
        } 
        else if (s[i] == '|') {
            bool temp = solveBoolean(s.substr(i + 1));
            result = (result && temp) || (!result && !temp);
            i += s.find '|' - 1;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    cin >> input;
    bool output = solveBoolean(input);
    if (output)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}