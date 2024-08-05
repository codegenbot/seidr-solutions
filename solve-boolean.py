def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    else:
        op = expression[0]
        val1, val2 = expression[1:].split(op)
        val1 = bool(val1) if val1 != 'F' else False
        val2 = bool(val2) if val2 != 'F' else False
        if op == '&':
            return val1 and val2
        elif op == '|':
            return val1 or val2