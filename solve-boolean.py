Here is the Python solution for the problem:

def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        ops = expression.split('&')
        result = bool(eval(ops[0]))
        for op in ops[1:]:
            result &= bool(eval(op))
        return result
    elif '|' in expression:
        ops = expression.split('|')
        result = bool(eval(ops[0]))
        for op in ops[1:]:
            result |= bool(eval(op))
        return result