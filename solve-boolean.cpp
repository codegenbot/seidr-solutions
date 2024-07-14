#include <vector>
using namespace std;

bool evaluateExpression(string expression) {
    stack<char> s;
    
    for(int i = 0; i < expression.size(); ++i){
        if(expression[i] == '|') {
            bool b1 = (s.top() == 'T');
            s.pop();
            bool b2 = (s.top() == 'T');
            s.pop();
            
            if(b1 && b2) 
                s.push('T'); 
            else
                s.push('F');
        } 
        else if(expression[i] == '&') {
            bool b1 = (s.top() == 'T');
            s.pop();
            bool b2 = (s.top() == 'T');
            s.pop();
            
            if(b1 && b2) 
                s.push('T'); 
            else
                s.push('F');
        } 
        else {
            s.push(expression[i]);
        }
    }
    
    return s.top() == 'T';
}

int main() {
    // Write your test cases here
    cout << evaluateExpression("t") << endl;  // Expected output: True
    cout << evaluateExpression("f") << endl;  // Expected output: False
    cout << evaluateExpression("f&f") << endl; // Expected output: False
    cout << evaluateExpression("f&t") << endl; // Expected output: False
    cout << evaluateExpression("t&f") << endl; // Expected output: False

    return 0;
}