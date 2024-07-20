```
def solve_boolean(expression):
    if expression == 'T':
        return True
    elif expression == 'F':
        return False

    def eval_expression(s):
        while '&' in s or '|' in s:
            for op in ['&', '|']:
                left, right = s.split(op)
                s = str(eval_boolean(left)) and (op == '&' or str(eval_boolean(right)))
        return str(eval_boolean(s))

    def eval_boolean(expression):
        if expression[0] == 'T':
            return True
        elif expression[0] == 'F':
            return False
        elif expression[1] in ['&', '|']:
            return eval_boolean(expression[:2]) and (expression[1] == '&' or eval_boolean(expression[2:]))
        else:
            return True if expression == 'T' else False

    return eval_expression(expression)