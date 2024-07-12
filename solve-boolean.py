```
def solve_boolean(expression):
    def evaluate_boolean(x, y, operator):
        if operator == '&':
            return x and y
        elif operator == '|':
            return x or y
        else:
            raise ValueError('Invalid operator')

    tokens = expression.split()
    result = True if tokens[0] == 't' else False

    for i in range(1, len(tokens)):
        operator = '&' if tokens[i] == '&f' else '|'
        right_operand = True if tokens[i+1] == 't' else False
        result = evaluate_boolean(result, right_operand, operator)
        i += 2

    return result