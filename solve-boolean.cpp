#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    bool result = false;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'T')
            return true;
        else if (expression[i] == 'F')
            return false;
        else if (expression[i] == '|') {
            int j = i + 1;
            while (j < expression.length() && expression[j] != '&') {
                j++;
            }
            string left = expression.substr(i, j - i);
            string right = expression.substr(j + 1);
            return evaluateBooleanExpression(left) || evaluateBooleanExpression(right);
        } else if (expression[i] == '&') {
            int j = i + 1;
            while (j < expression.length() && expression[j] != '|') {
                j++;
            }
            string left = expression.substr(i, j - i);
            string right = expression.substr(j + 1);
            return evaluateBooleanExpression(left) && evaluateBooleanExpression(right);
        }
    }
    return result;
}

int main() {
    // Test cases
    cout << (evaluateBooleanExpression("t") ? "True" : "False") << endl; // True
    cout << (evaluateBooleanExpression("f") ? "True" : "False") << endl; // False
    cout << (evaluateBooleanExpression("f&f")) << endl; // False
    cout << (evaluateBooleanExpression("f&t")) << endl; // False
    cout << (evaluateBooleanExpression("t&f")) << endl; // False

    return 0;
}