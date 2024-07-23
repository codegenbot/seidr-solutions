#include <string>
using namespace std;

bool evaluateBooleanExpression(string expression) {
    if(expression[0] == 'T' || expression[0] == 't') return true;
    if(expression[0] == 'F' || expression[0] == 'f') return false;

    string operand1 = "";
    string operator_;
    string operand2 = "";

    int i = 0;
    for(; i < expression.size(); i++) {
        if(isalpha(expression[i])) {
            if(i > 0 && isalpha(expression[i-1]))
                operand1 += expression[i];
            else
                operand2 += expression[i];
        }
        else if(expression[i] == '|') {
            operator_ = "|";
            break;
        }
        else if(expression[i] == '&') {
            operator_ = "&";
            break;
        }
    }

    bool result;
    if(operator_ == "&") 
        result = evaluateBooleanExpression(operand1) && evaluateBooleanExpression(operand2);
    else
        result = evaluateBooleanExpression(operand1) || evaluateBooleanExpression(operand2);

    return result;
}

int main() {
    // Write test cases here.
    cout << (evaluateBooleanExpression("t")) << endl;  // Expected output: True
    cout << (evaluateBooleanExpression("f")) << endl;  // Expected output: False
    cout << (evaluateBooleanExpression("f&f")) << endl; // Expected output: False
    cout << (evaluateBooleanExpression("f&t")) << endl; // Expected output: False
    cout << (evaluateBooleanExpression("t&f")) << endl; // Expected output: False

    return 0;
}