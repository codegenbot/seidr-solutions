```
def solve_boolean(expression):
    def evaluate_expression(s):
        while '|' in s or '&' in s:
            if '|' in s:
                s = s.replace('|', ' or ', 1)
            elif '&' in s:
                s = s.replace('&', ' and ', 1)
        return eval(s)

    expression = expression.strip().lower()
    
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    else:
        return evaluate_expression(expression)