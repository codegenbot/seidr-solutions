bool solveBoolean(std::string expression) {
    int i = 0;
    bool prevBool = false;
    while(i < expression.length()) {
        if(expression[i] == '&') {
            prevBool = (prevBool && true);
        } else if(expression[i] == '|') {
            prevBool = (prevBool || true);
        } else if(expression[i] == 'T') {
            prevBool = true;
        } else if(expression[i] == 'F') {
            prevBool = false;
        }
        i++;
    }
    return prevBool;
}