#include <stack>
#include <string>

bool solveBoolean(std::string expression) {
    std::stack<char> s;
    for(int i=0; i<expression.length(); i++){
        if(expression[i] == '&') {
            while(!s.empty() && s.top() == '|') {
                s.pop();
            }
            if(s.empty())
                return false;
        } else if(expression[i] == '|') {
            while(!s.empty() && s.top() == '&') {
                s.pop();
            }
            if(s.empty())
                return true;
        } else if(expression[i] != 'T' && expression[i] != 'F'){
            if(expression[i] == '&')
                s.push('&');
            else
                s.push('|');
        } else{
            while(!s.empty()) {
                s.pop();
            }
            return expression[i] == 'T';
        }
    }
    while(!s.empty()) {
        s.pop();
    }
    return true;
}