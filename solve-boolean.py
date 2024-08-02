def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        for i in range(len(expression)):
            if expression[i] == '&':
                return not (expression[:i].endswith('t') and expression[i+1:].endswith('t'))
            elif expression[i] == '|':
                return expression.count('t') > 0