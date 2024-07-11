```
def solve(expression):
    expression = expression.upper()
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solve(left) and solve(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solve(left) or solve(right)
    else:
        if '&' in expression:
            if '|' in expression:
                raise ValueError("Invalid expression")
            return not eval(expression.replace('&', 'and').replace('|', 'or'))