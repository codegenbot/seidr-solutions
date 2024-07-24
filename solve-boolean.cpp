#include <string>

bool solveBoolean(string booleanExpression) {
    bool result = true;
    for (int i = 0; i < booleanExpression.length(); i++) {
        if (booleanExpression[i] == 'F') {
            result = false;
            break;
        } else if (booleanExpression[i] == '&') {
            for (int j = i + 1; j < booleanExpression.length(); j++) {
                if (booleanExpression[j] == 'T' || booleanExpression[j] == '|') {
                    return false;
                }
                if (booleanExpression[j] == 'F') {
                    result = false;
                    break;
                } else if (booleanExpression[j] == '&') {
                    for (int k = j + 1; k < booleanExpression.length(); k++) {
                        if (booleanExpression[k] == 'T' || booleanExpression[k] == '|') {
                            return false;
                        }
                        if (booleanExpression[k] == 'F') {
                            result = false;
                            break;
                        }
                    }
                }
            }
        } else if (booleanExpression[i] == '|') {
            for (int j = i + 1; j < booleanExpression.length(); j++) {
                if (booleanExpression[j] == 'T' || booleanExpression[j] == '&') {
                    return true;
                }
                if (booleanExpression[j] == 'F') {
                    result = false;
                    break;
                } else if (booleanExpression[j] == '|') {
                    for (int k = j + 1; k < booleanExpression.length(); k++) {
                        if (booleanExpression[k] == 'T' || booleanExpression[k] == '&') {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return result;
}