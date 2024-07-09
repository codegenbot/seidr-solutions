```
def solve_boolean(expression):
    def eval_expr(expression):
        stack = []
        left = ''
        operators = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
        while expression:
            if expression[0] in 'TF':
                yield bool(expression[0])
                expression = expression[1:]
            elif expression[0] in '&|(':
                if expression[0] == '(':
                    stack.append(left + operators.get(expression[0], lambda x: x)(left, left))
                    left = ''
                else:
                    left = operators[expression[0]](left, eval_expr(expression[1])[0])
            elif expression[0] == ')':
                result = stack.pop()
                left = str(result)
        return bool(left)

    return next(eval_expr(expression))