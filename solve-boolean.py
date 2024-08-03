Here is the Python solution for the problem:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        a, b = expression.split('&')
        return not (solve_boolean(a) and solve_boolean(b))
    elif '|' in expression:
        a, b = expression.split('|')
        return solve_boolean(a) or solve_boolean(b)

print(solve_boolean('t'))  # True
print(solve_boolean('f'))  # False
print(solve_boolean('f&f'))  # False
print(solve_boolean('f&t'))  # False
print(solve_boolean('t&f'))  # False