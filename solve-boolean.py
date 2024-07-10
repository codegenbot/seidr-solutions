```
def solve_boolean(expression):
    if not expression:
        return False

    stack = []
    for char in expression:
        if char.upper() == 'T':
            stack.append(True)
        elif char.upper() == 'F':
            stack.append(False)

    result = stack[0]
    for i in range(1, len(expression)):
        operator = expression[i].upper()
        operand2 = stack.pop()
        if operator == '&':
            result = result and operand2
        else:
            result = result or operand2

    return result