#include <string>
using namespace std;

bool solveBoolean(string booleanExpression) {
    if (booleanExpression == "T" || booleanExpression == "t") return true;
    if (booleanExpression == "F" || booleanExpression == "f") return false;
    
    for(int i = 0; i < booleanExpression.length(); i++) {
        char c = booleanExpression[i];
        if(c == '&') {
            bool a = solveBoolean(booleanExpression.substr(0, i));
            bool b = solveBoolean(booleanExpression.substr(i + 1));
            return a && b;
        } 
        else if(c == '|') {
            bool a = solveBoolean(booleanExpression.substr(0, i));
            bool b = solveBoolean(booleanExpression.substr(i + 1));
            return a || b;
        }
    }
    
    return false; // should not reach here
}