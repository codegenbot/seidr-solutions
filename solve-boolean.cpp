#include <string>

bool solveBoolean(std::string booleanExpression) {
    int i = 0;
    bool result = false;

    while (i < booleanExpression.length()) {
        if (booleanExpression[i] == 'T') {
            result = true;
        } else if (booleanExpression[i] == 'F') {
            result = false;
        } else if (booleanExpression[i] == '|') {
            i++;
            bool left = (i < booleanExpression.length() && (booleanExpression[i] == 'T' || booleanExpression[i] == 'F')) ? true : false;
            bool right = (i < booleanExpression.length() && (booleanExpression[i] == 'T' || booleanExpression[i] == 'F')) ? true : false;

            if (left && right) {
                result = true;
            } else {
                result = false;
            }
        } else if (booleanExpression[i] == '&') {
            i++;
            bool left = (i < booleanExpression.length() && (booleanExpression[i] == 'T' || booleanExpression[i] == 'F')) ? true : false;
            bool right = (i < booleanExpression.length() && (booleanExpression[i] == 'T' || booleanExpression[i] == 'F')) ? true : false;

            if (!left || !right) {
                result = false;
            } else {
                result = true;
            }
        }
        i++;
    }

    return result;
}