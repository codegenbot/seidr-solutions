Here is the solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise Exception('Invalid expression')
    elif '&' in expression:
        return all(c == 'T' for c in expression)
    elif '|' in expression:
        return any(c == 'T' for c in expression)

print(solve_boolean('t'))
print(solve_boolean('f'))
print(solve_boolean('f&f'))
print(solve_boolean('f&t'))
print(solve_boolean('t&f'))