```
def solve_boolean(expression):
    ops = ['&', '|']
    stack = []
    result = True if expression[0] == 'T' else False

    for char in expression:
        if char in ops:
            stack.append(char)
        elif char != 'T' and char != 'F':
            raise ValueError("Invalid operation")
        elif not stack:
            temp_result = char
        else:
            op = stack.pop()
            if op == '&':
                result = result and temp_result
            elif op == '|':
                result = result or temp_result
            temp_result = True if char == 'T' else False

    return result