```
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

print("Result:", "True" if solve_boolean('t') else "False")
print("Result:", "True" if solve_boolean('f') else "False")
print("Result:", "False" if solve_boolean('f&f') else "True")
print("Result:", "False" if solve_boolean('f&t') else "True")
print("Result:", "False" if solve_boolean('t&f') else "True")