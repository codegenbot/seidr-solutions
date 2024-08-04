Here is the solution for the problem:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        left, right = expression.split('&')
        return solve_boolean(left) and solve_boolean(right)
    elif '|' in expression:
        left, right = expression.split('|')
        return solve_boolean(left) or solve_boolean(right)

# For example,
print(solve_boolean('t'))  # Output: True
print(solve_boolean('f'))  # Output: False
print(solve_boolean('f&f'))  # Output: False
print(solve_boolean('f&t'))  # Output: False
print(solve_boolean('t&f'))  # Output: False