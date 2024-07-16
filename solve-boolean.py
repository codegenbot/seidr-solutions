```
def solve_boolean(expression):
    def evaluate():
        if expression[0] in ['T', 'F']:
            return expression[0] == 'T'
        elif expression[0] == '(':
            i = 1
            temp = evaluate()
            while i < len(expression) and expression[i] != ')':
                i += 1
            return temp
        operator = expression[0]
        i = 1
        if operator in ['|', '&']:
            left = evaluate()
            i += 2
            right = evaluate()
            if operator == '|':
                return left or right
            elif operator == '&':
                return left and right
    return evaluate()