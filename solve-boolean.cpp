bool solveBoolean(string expr) {
    if (expr == "T") return true;
    if (expr == "F") return false;
    
    bool result = true;
    int i = 0;
    while (i < expr.length()) {
        if (expr[i] == '|') {
            for (int j = i; j > 0 && expr[j-1] != '('; j--) {}
            int end = i + 1;
            while (end < expr.length() && expr[end] != ')') {
                end++;
            }
            string sub = expr.substr(j, end - j);
            if (sub == "T") result &= true;
            else if (sub == "F") result &= false;
            else {
                bool temp = solveBoolean(sub);
                if (temp) result |= true; else result |= false;
            }
        } 
        i++;
    }
    
    return result;
}