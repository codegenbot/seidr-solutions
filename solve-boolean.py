def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    else:
        ops = ['&', '|']
        while '&' in expression or '|' in expression:
            for op in ops:
                if op in expression:
                    left, right = expression.split(op)
                    if op == '&':
                        expression = str(eval(left) and eval(right))
                    elif op == '|':
                        expression = str(eval(left) or eval(right))
        return eval(expression)