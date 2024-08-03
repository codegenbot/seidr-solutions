def solve.Boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression and '|' in expression:
        raise Exception("Invalid expression")
    else:
        def evaluate(expression):
            a, operator, b = expression.split()
            a = evaluate(a) if '&' in a or '|' in a else (a == 'T')
            b = evaluate(b) if '&' in b or '|' in b else (b == 'T')
            if operator == '&':
                return a and b
            elif operator == '|':
                return a or b
        return evaluate(expression)