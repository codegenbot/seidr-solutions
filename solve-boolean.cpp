#include <iostream>
#include <string>
using namespace std;

bool evaluateBoolean(const string& expr) {
    bool result = expr[0] == 't';
    for (int i = 1; i < expr.size(); i += 2) {
        if (expr[i] == '|') {
            result = result || (expr[i + 1] == 't');
        } else {
            result = result && (expr[i + 1] == 't');
        }
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    
    if (evaluateBoolean(input)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}