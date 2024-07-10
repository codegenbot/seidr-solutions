```
def solve_boolean(expression):
    result = True
    op = ''
    for char in expression:
        if char == 'T':
            value = True
        elif char == 'F':
            value = False
        elif char in '|&':
            if op == '&':
                result &= value
            elif op == '|':
                result |= value
            value, op = bool(input('Input (True/False):')), char
    return result