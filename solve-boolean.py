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
        else:
            temp_result = True if char == 'T' else False
            while stack and stack[-1] in ops:
                op = stack.pop()
                if op == '&':
                    temp_result = temp_result and (expression[expression.index(char)+1] == 'T')
                elif op == '|':
                    temp_result = temp_result or (expression[expression.index(char)+1] == 'T')
            result = temp_result

    return result