Here is the solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid expression')
    elif '&' in expression:
        return all([x == 'T' for x in expression.split('&')])
    elif '|' in expression:
        return any([x == 'T' for x in expression.split('|')])

result = solve_boolean(input())
print(result)