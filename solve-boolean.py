Here is a Python solution for this problem:

```
def solve_boolean(expression):
    def boolean_operation(a, b, op):
        if op == '&':
            return a and b
        elif op == '|':
            return a or b
        else:
            raise ValueError('Invalid operator')

    tokens = expression.split()
    result = True

    for token in tokens:
        if token == 'T':
            result = boolean_operation(result, True, '&')
        elif token == 'F':
            result = boolean_operation(result, False, '&')
        elif token == '&' or token == '|':
            pass
        else:
            raise ValueError('Invalid expression')

    return result