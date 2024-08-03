Here is the solution:

def solve_boolean(expression):
    if expression == 't':
        return True
    elif expression == 'f':
        return False
    elif '&' in expression:
        ops = expression.split('&')
        for i in range(len(ops)):
            ops[i] = ops[i].strip()
        return all(solve_boolean(op) for op in ops)
    elif '|' in expression:
        ops = expression.split('|')
        for i in range(len(ops)):
            ops[i] = ops[i].strip()
        return any(solve_boolean(op) for op in ops)

expression = input()
print(solve_boolean(expression))