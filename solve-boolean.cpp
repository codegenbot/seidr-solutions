#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if (expression == "T" || expression == "t")
        return true;
    if (expression == "F" || expression == "f")
        return false;
    
    int i = 0, j = 0;
    while(j < expression.size()) {
        if(expression[j] == '&') {
            j++;
            continue;
        }
        
        string operand1 = "";
        while(i < expression.size() && expression[i] != '&' && expression[i] != '|') {
            operand1 += expression[i];
            i++;
        }
        i--;
        
        bool op1 = (operand1 == "T" || operand1 == "t");
        
        j++;
        
        if(j >= expression.size())
            return op1;
        
        string operand2 = "";
        while(i < expression.size() && expression[i] != '&' && expression[i] != '|') {
            operand2 += expression[i];
            i++;
        }
        i--;
        
        bool op2 = (operand2 == "T" || operand2 == "t");
        
        if(expression[j] == '&') {
            return op1 && op2;
        } else {
            return op1 | op2;
        }
    }
    
    return false;
}