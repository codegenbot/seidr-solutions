int main() {
    string expr;
    cin >> expr;
    bool result = false;
    
    if(expr == "t") {
        result = true;
    } else if(expr == "f") {
        result = false;
    } else {
        bool operand1 = (expr[0] == 't') ? true : false;
        bool operand2 = (expr[2] == 't') ? true : false;
        
        if(expr[1] == '&') {
            result = operand1 && operand2;
        } else if(expr[1] == '|') {
            result = operand1 || operand2;
        }
    }
    
    cout << ((result) ? "True" : "False") << endl;
    
    return 0;
}