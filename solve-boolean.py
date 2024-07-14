Here is the Python solution:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        parts = expression.split('&')
        return all(solve_boolean(part) for part in parts)
    elif '|' in expression:
        parts = expression.split('|')
        return any(solve_boolean(part) for part in parts)

print(solve_boolean('t')) 
# Expected output: True
print(solve_boolean('f'))
# Expected output: False
print(solve_boolean('f&f'))
# Expected output: False
print(solve_boolean('f&t'))
# Expected output: False
print(solve_boolean('t&f'))
# Expected output: False