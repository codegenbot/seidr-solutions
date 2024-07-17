```
def solve_boolean(expression):
    def evaluate_operator(op, a, b):
        if op == '&':
            return a and b
        elif op == '|':
            return a or b
        else:
            raise ValueError("Invalid operator")

    result = expression[0]
    for i in range(1, len(expression), 2):
        op = expression[i]
        value = expression[i+1] == 'T'
        result = evaluate_operator(op, result, value)
    return result