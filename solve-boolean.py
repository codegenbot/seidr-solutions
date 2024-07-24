def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression:
        ops = expression.split('&')
        for i in range(len(ops)):
            if 'T' in ops[i]:
                ops[i] = 'True'
            else:
                ops[i] = 'False'
        return eval('&'.join(ops))
    elif '|' in expression:
        ops = expression.split('|')
        for i in range(len(ops)):
            if 'T' in ops[i]:
                ops[i] = 'True'
            else:
                ops[i] = 'False'
        return eval('|'.join(ops))