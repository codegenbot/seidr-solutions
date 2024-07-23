```Python
def solve_boolean(expression):
    def evaluate_operator(left, operator, right):
        if operator == '&':
            return left and right
        elif operator == '|':
            return left or right

    while '&' in expression:
        i = 0
        for char in expression:
            if char == '&':
                left, right = expression[:i], expression[i+1:]
                expression = str(evaluate_operator(left== 'T', '&', right== 'T'))+'&'
                i += len(str(left== 'T'))
        else:
            break

    while '|' in expression:
        i = 0
        for char in expression:
            if char == '|':
                left, right = expression[:i], expression[i+1:]
                expression = str(evaluate_operator(left== 'T', '|', right== 'T'))+'|'
                i += len(str(left== 'T'))
        else:
            break

    return expression == 'T'