```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    result = None
    operators = []
    for char in expression:
        if char in ['&', '|']:
            op = char
            while len(operators) > 0 and operators[-1] == op:
                if op == '&':
                    result = all([op == 'T' for op in operators])
                elif op == '|':
                    result = any([op == 'T' for op in operators])
                operators.pop()
            operators.append(char)
        else:
            if result is None:
                result = char == 'T'
            else:
                if op == '&':
                    result = result and (char == 'T')
                elif op == '|':
                    result = result or (char == 'T')
    return result

print(solve_boolean('t'))  # True
print(solve_boolean('f'))  # False
print(solve_boolean('f&f'))  # False
print(solve_boolean('f&t'))  # False
print(solve.Boolean('t&f'))  # False