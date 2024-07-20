```
def solve_boolean(expression):
    ops = ['&', '|']
    stack = []
    result = True if expression[0] == 'T' else False
    temp_result = result

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
                temp_result = result and (char == 'T')
            elif op == '|':
                temp_result = result or (char == 'T')
            result = temp_result

    return result