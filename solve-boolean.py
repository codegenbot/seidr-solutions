def solve_boolean(expression):
    ops = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
    stack = []
    result = True if expression[0] == 'T' else False

    for char in expression:
        if char in ops:
            stack.append((ops[char], None))
        elif char != 'T' and char != 'F':
            raise ValueError("Invalid operation")
        elif not stack:
            result = char
        else:
            op, _ = stack.pop()
            if char == 'T':
                if isinstance(op, str):
                    result = op(result, True)
                else:
                    result, op = op
                    if op is None:
                        continue
                    if op[1] != '':
                        result = op[0](result, True)
                        continue
            elif char == 'F':
                if isinstance(op, str):
                    result = op(result, False)
                else:
                    result, op = op
                    if op is None:
                        continue
                    if op[1] != '':
                        result = op[0](result, False)

    return result