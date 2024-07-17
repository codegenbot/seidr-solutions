#include <string>
using namespace std;

bool solveBoolean(string expression) {
    stack<char> op;
    stack<string> val;
    
    for(int i=0; i<expression.length(); i++) {
        if(expression[i] == '&') {
            string left = val.top();
            val.pop();
            string right = "";
            i++;
            while(i < expression.length() && expression[i] != '|') {
                right += expression[i];
                i++;
            }
            i--;
            val.push(to_string((left[0] == 'T' && right[0] == 'T') || (left[0] == 'F' && right[0] == 'F')) + "");
        } else if(expression[i] == '|') {
            string left = val.top();
            val.pop();
            string right = "";
            i++;
            while(i < expression.length() && expression[i] != '&') {
                right += expression[i];
                i++;
            }
            i--;
            val.push(to_string((left[0] == 'T' || right[0] == 'T') || (left[0] == 'F' || right[0] == 'F')) + "");
        } else if(expression[i] == 'T' || expression[i] == 'F') {
            string s = "";
            s += expression[i];
            val.push(s);
        }
    }
    
    return (val.top()[0] == 'T');
}