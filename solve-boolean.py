Here is the solution:

def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression:
        ops = expression.split('&')
        return all(solve_boolean(op) for op in ops)
    elif '|' in expression:
        ops = expression.split('|')
        return any(solve_boolean(op) for op in ops)

print(solve_boolean('t'))
print(solve_boolean('f'))
print(solve_boolean('f&f'))
print(solve_boolean('f&t'))
print(solve_boolean('t&f'))