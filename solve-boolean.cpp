#include <iostream>
#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if (expression.find('&') != string::npos) {
        return expression.find('F') != string::npos ? false : true;
    } else if (expression.find('|') != string::npos) {
        return expression.find('T') != string::npos ? true : false;
    } else {
        return expression == "T";
    }
}

int main() {
    string input;
    getline(cin, input);

    cout << (evaluateBooleanExpression(input) ? "True" : "False") << endl;

    return 0;
}