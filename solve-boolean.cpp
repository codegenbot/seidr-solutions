bool evaluateBool(string expr) {
    if(expr == "t") return true;
    if(expr == "f") return false;
    bool result = (expr[0] == 't'); // Initialize result to the first operand
    for(int i = 1; i < expr.size(); i+=2) {
        if(expr[i] == '&') {
            result = result && (expr[i+1] == 't');
        } else if(expr[i] == '|') {
            result = result || (expr[i+1] == 't');
        }
    }
    return result;
}

int main() {
    string expr;
    cin >> expr;
    if(evaluateBool(expr)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}