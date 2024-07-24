def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError('Invalid expression')
    else:
        result = True if expression[0] == 'T' else False
        ops = {'&': lambda x: x % 2 == 0, '|': lambda x: x % 2 != 0}
        for op in expression[1:]:
            if op in ops:
                result = ops[op](expression.count(op))
            else:
                raise ValueError('Invalid expression')
        return result