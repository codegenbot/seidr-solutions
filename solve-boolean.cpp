bool solveBoolean(std::string expression) {
    bool result = true;
    for(int i=0; i<expression.length(); i++){
        if(expression[i] == 'T') result = true;
        else if(expression[i] == 'F') result = false;
        else if(expression[i] == '&') {
            while(i+1 < expression.length() && expression[i+1] == '&') i++;
            while(i+1 < expression.length() && expression[i+1] == '|') i++;
        }
        else if(expression[i] == '|') {
            while(i+1 < expression.length() && expression[i+1] == '|') i++;
            while(i+1 < expression.length() && expression[i+1] == '&') i++;
        }
    }
    return result;
}