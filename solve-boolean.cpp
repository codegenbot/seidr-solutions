bool solveBoolean(string booleanExpression) {
    bool result = true;
    for (int i = 0; i < booleanExpression.length(); i++) {
        switch (booleanExpression[i]) {
            case 'T':
                break;
            case 'F':
                result = false;
                return result;
            case '&': {
                int j = i + 1;
                while (j < booleanExpression.length() && booleanExpression[j] == '&') 
                    j++;
                if (j >= booleanExpression.length()) return false;
                i = j - 1;
                break;
            }
            case '|': {
                int j = i + 1;
                while (j < booleanExpression.length() && booleanExpression[j] == '|') 
                    j++;
                if (j >= booleanExpression.length()) return true;
                i = j - 1;
                break;
            }
        }
    }
    return result;
}