#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if (expression == "T") return true;
    if (expression == "F") return false;
    
    for(int i=0; i<expression.size(); i++) {
        if(expression[i] == '|') {
            string left = expression.substr(0, i);
            string right = expression.substr(i+1);
            
            return solveBoolean(left) || solveBoolean(right);
        }
        else if(expression[i] == '&') {
            string left = expression.substr(0, i);
            string right = expression.substr(i+1);
            
            return solveBoolean(left) && solveBoolean(right);
        }
    }
    
    return false;
}