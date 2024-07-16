def solve_boolean(expression):
    def evaluate():
        if expression[0] in ['T', 'F']:
            return expression[0]
        if expression[1] == '(':
            return int(evaluate()[0]) + 1
        operator = expression[0]
        i = 2
        while i < len(expression) and expression[i] not in ['|', '&']:
            i += 1
        left = evaluate()
        right = ''
        if i < len(expression):
            j = i + 1
            while j < len(expression) and expression[j] != '(':
                right += expression[j]
                j += 1
            return operator == '|' and (left == 'T' or right == 'F') or operator == '&' and (left == 'F' or right == 'F')
        else:
            return operator == '|' and left == 'F' or operator == '&' and left == 'T'
    return 'T' if evaluate() else 'F'