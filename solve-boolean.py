```
def solve_boolean(expression):
    def helper(expression):
        if '(' in expression:
            i = expression.index('(')
            j = expression.index(')')
            return helper(expression[i+1:j]) and (expression[:i].strip('&|') == 'T' or
                                                     expression[:i].strip('&|').count('&') > expression[:i].strip('&|').count('|'))
        if '&' in expression:
            left = True if expression[0] == 'T' else False
            right = True if expression[-1] == 'T' else False
            return left and right
        elif '|' in expression:
            left = True if expression[0] == 'T' else False
            right = True if expression[-1] == 'T' else False
            return left or right
        if expression[0] == 'T':
            return True
        if expression[0] == 'F':
            return False

    return helper(expression)