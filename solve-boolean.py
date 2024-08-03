```
def solve(input_str):
    def bool_eval(expression):
        if expression == 'T':
            return True
        elif expression == 'F':
            return False
        elif '&' in expression:
            left, right = expression.split('&')
            return bool_eval(left) and bool_eval(right)
        elif '|' in expression:
            left, right = expression.split('|')
            return bool_eval(left) or bool_eval(right)

    return bool_eval(input_str)