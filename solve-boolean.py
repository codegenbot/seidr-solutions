def solve_boolean(expression):
    def evaluate(expression):
        if expression[0] == '(':
            i = 1
            for char in expression[1:]:
                if char == '(':
                    i += 1
                elif char == ')':
                    i -= 1
                    if i == 0:
                        return int(evaluate(expression[1:i]) == 'T')
            raise ValueError("Unbalanced parentheses")
        elif expression[0] in ['T', 'F']:
            return expression[0] == 'T'
        elif len(expression) > 1 and expression[1] in ['&', '|']:
            if expression[1] == '&':
                return evaluate(expression[:2]) and evaluate(expression[2:])
            else:
                return evaluate(expression[:2]) or evaluate(expression[2:])
        else:
            raise ValueError("Invalid expression")
    return int(evaluate(expression) == 'T')