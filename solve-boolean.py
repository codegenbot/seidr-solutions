```
def solve_boolean(expression):
    ops = ['|', '&']
    reversed_expression = expression[::-1]
    result = True if reversed_expression[0] == 'T' else False
    stack = []

    for char in reversed_expression:
        if char in ops:
            stack.append(char)
        elif char != 'T' and char != 'F':
            raise ValueError("Invalid operation")
        elif not stack:
            result = char == 'T'
        else:
            op = stack.pop()
            if op == '&':
                result = result and (char == 'T')
            elif op == '|':
                result = result or (char == 'T')

    return result