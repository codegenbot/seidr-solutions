#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    string op = "";
    for (char c : s) {
        if (c == 'T' || c == 't') {
            op += "1";
        } else if (c == 'F' || c == 'f') {
            op += "0";
        } else if (c == '&') {
            result = (result && (op.back() - '0'));
            op.pop_back();
        } else if (c == '|') {
            result = (result || (op.back() - '0'));
            op.pop_back();
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