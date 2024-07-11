#include <iostream>
#include <string>

using namespace std;

bool evaluateExpression(const string& expr, int& index) {
    if (index >= expr.size()) {
        return false;
    }
    
    bool result = (expr[index] == 'T');
    index++;
    
    while (index < expr.size() && expr[index] != '|' && expr[index] != '&') {
        char op = expr[index];
        index++;
        
        bool next = (expr[index] == 'T');
        if (op == '&') {
            result = result && next;
        } else {
            result = result || next;
        }
        
        index++;
    }
    
    return result;
}

int main() {
    string input;
    cin >> input;
    
    int index = 0;
    bool result = evaluateExpression(input, index);
    
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}