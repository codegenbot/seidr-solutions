Here is the solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    elif '&' in expression:
        return eval(expression.replace('&', 'and'))
    elif '|' in expression:
        return eval(expression.replace('|', 'or'))

expression = input()
print(solve_boolean(expression))