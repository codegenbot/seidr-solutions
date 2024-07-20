```python
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False
    if '&' in expression and '|' in expression:
        raise ValueError("Invalid operation")
    operators = ['&', '|']
    values = [expression.index(op) for op in operators]
    result = True if expression[0] == 'T' else False
    for op, val in zip(operators, values):
        if op == '&':
            result = result and (val > 0)
        elif op == '|':
            result = result or (val > 0)
    return result