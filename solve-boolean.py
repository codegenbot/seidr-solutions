def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid expression")
    else:
        ops = {'&': lambda x, y: x and y,
               '|': lambda x, y: x or y}
        return eval(' '.join(map(str, [ops[op](x, y) if op in expression else x for x, op, y in zip(expression[::2], expression[1::3], expression[2::4])]))