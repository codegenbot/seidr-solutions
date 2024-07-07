def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise Exception("Invalid expression")
    else:
        for char in expression:
            if char == '&':
                return bool(eval(expression.replace('&', 'and').replace('|', 'or')))
            elif char == '|':
                return not bool(eval(expression.replace('|', 'or').replace('&', 'and')))

def solve(input):
    return str(solve_boolean(input))