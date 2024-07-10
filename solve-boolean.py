Here is the Python solution for the problem:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid expression')
    elif '&' in expression:
        return all(bool(eval(i)) for i in expression.split('&'))
    else:
        return bool(eval(expression))

expression = input()
print(solve_boolean(expression))