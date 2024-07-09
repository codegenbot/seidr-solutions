def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    elif '&' in expression or '|' in expression:
        expressions = expression.split('&') if '&' in expression else [expression]
        expressions = [expr.split('|')[0] for expr in expressions]
        return all(map(solve_boolean, expressions))