def solve_boolean(expression):
    ops = ['&', '|']
    stack = []
    result = True if expression[0] == 'T' else False
    temp = None

    for char in expression:
        if char in ops:
            stack.append(char)
        elif char != 'T' and char != 'F':
            raise ValueError("Invalid operation")
        elif not stack:
            temp = char
            if op == '&':
                result &= (temp == 'T')
            elif op == '|':
                result |= (temp == 'T')
        else:
            op = stack.pop()
            if op == '&':
                result &= (temp == 'T')
            elif op == '|':
                result |= (temp == 'T')
            temp = None

    return result