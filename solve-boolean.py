def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    else:
        operators = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
        for op in operators:
            if op in expression:
                left, right = expression.split(op)
                return operators[op](left == 'T', right == 'T')