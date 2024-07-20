```
def solve_boolean(expression):
    ops = ['&', '|']
    stack = []
    result = True if expression[0] == 'T' else False
    expression = expression[::-1]

    for char in expression:
        if char in ops:
            a = stack.pop() != 'T'
            b = char == 'T'
            if char == '&':
                result = a and b
            elif char == '|':
                result = a or b
            stack.append(result)
        else:
            stack.append(char)

    return stack[0]