```
def solve_boolean(expression):
    if not expression:
        return False
    elif expression[0] in ['T', 'F']:
        return {'T': True, 'F': False}[expression[0]]
    elif expression[0] == '(':
        i = 1
        while expression[i] != ')':
            i += 1
        return solve_boolean(expression[1:i]) and solve_boolean(expression[i+1:])
    elif expression[0] == '|':
        return solve_boolean(expression[1:]) or solve_boolean(expression[2])
    else:
        return solve_boolean(expression[1:]) and solve_boolean(expression[2])

print(solve_boolean('t&t&t&f&t|t&t&t'))