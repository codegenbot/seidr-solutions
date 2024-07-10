def solve_boolean(expression):
    def evaluate(expression):
        if '&&' in expression or '||' in expression:
            left = expression.split('&&')[0].split('||')[0]
            right = expression.split('&&')[1].split('||')[1]
            return (evaluate(left) and evaluate(right)) if '&&' in expression else (evaluate(left) or evaluate(right))
        for char in expression:
            if char.upper() == '(':
                i = 1
                for c in expression[expression.index(char)+1:]:
                    if c == '(':
                        i += 1
                    elif c == ')':
                        i -= 1
                    if i == 0:
                        return evaluate(''.join(expression[:expression.index(char)] + expression[expression.index(char)+1:expression.index(char)+expression.index(char)+i+1]))
        for char in expression:
            if char.upper() == 'T':
                return True
            elif char.upper() == 'F':
                return False
        operator = None
        operand2 = None
        for char in expression:
            if char.upper() == '|':
                operator = '|'
            elif char.upper() == '&':
                operator = '&'
            elif char.upper() == 'T' or char.upper() == 'F':
                operand2 = char.upper() == 'T'
                break
        if operator is None:
            return True  # default to True for an empty expression

        if operator == '|':
            return evaluate(''.join(expression[:expression.index(char)]) + str(operand2)) or evaluate(''.join(expression[expression.index(char)+1:]))
        else:
            return not (evaluate(''.join(expression[:expression.index(char)])) or evaluate(''.join(expression[expression.index(char)+1:]))) if operator == '&' else False

    return evaluate(expression)