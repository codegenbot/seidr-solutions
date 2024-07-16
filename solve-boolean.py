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

        if expression[0] in ['|', '&']:
            operator = expression[0]
            i = 1
            if operator == '|':
                left = evaluate()
                right = i + 1
                while i < len(expression) and expression[i] != ' ':
                    i += 1
                return left or right
            elif operator == '&':
                left = evaluate()
                right = i + 1
                while i < len(expression) and expression[i] != ' ':
                    i += 1
                return left and right

    return evaluate()