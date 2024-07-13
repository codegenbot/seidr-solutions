bool solveBoolean(string boolExp) {
    stack<char> operatorStack;
    bool currentTerm = (boolExp[0] == 'T');
    
    for(int i=1; i<boolExp.size(); i++) {
        if(boolExp[i] == '&') {
            while (!operatorStack.empty() && operatorStack.top() == '&') {
                operatorStack.pop();
            }
        } else if(boolExp[i] == '|') {
            while (!operatorStack.empty()) {
                operatorStack.pop();
            }
        } else if(boolExp[i] == 'T' || boolExp[i] == 'F') {
            currentTerm = (boolExp[i] == 'T');
            while (!operatorStack.empty() && operatorStack.top() != '|') {
                operatorStack.pop();
            }
            if(!operatorStack.empty()) {
                operatorStack.pop(); // pop |
                bool operatorValue = (boolExp[i-1] == 'T'); // get value of previous term
                currentTerm = (currentTerm) ^ operatorValue;
            }
        }
    }
    
    return currentTerm;
}