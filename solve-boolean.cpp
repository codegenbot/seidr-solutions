bool solveBoolean(std::string expression) {
    bool result = true;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == 'T') {
            result = true;
        }
        else if (expression[i] == 'F') {
            result = false;
        }
        else if (expression[i] == '&') {
            int j = i + 1;
            while(j < expression.length() && expression[j] != '|'){
                if(expression[j] == 'T') continue;
                if(expression[j] == 'F') break;
                j++;
            }
            result &= (j >= expression.length() || expression[j] == 'F');
        }
        else if (expression[i] == '|') {
            int j = i + 1;
            while(j < expression.length() && expression[j] != '&'){
                if(expression[j] == 'T' || expression[j] == 'F') break;
                j++;
            }
            result |= (j >= expression.length() || expression[j] == 'T');
        }
    }
    return result;
}