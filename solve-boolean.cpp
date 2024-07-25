#include <string>
using namespace std;

bool solveBoolean(string expression) {
    int i = 0;
    while (i < expression.size()) {
        if (expression[i] == '&') {
            return !((expression[i-1] == 'T' && expression[i+1] == 'T'));
        } else if (expression[i] == '|') {
            return ((expression[i-1] == 'T' || expression[i+1] == 'T'));
        }
        i++;
    }
    return expression[0] == 'T';
}

int main() {
    string expression;
    cin >> expression;
    cout << boolalpha << solveBoolean(expression) << endl;
    return 0;
}