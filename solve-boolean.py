```
def solve_boolean(expression):
    def boolean_operator(operator, a, b):
        if operator == '&':
            return a and b
        elif operator == '|':
            return a or b
        else:
            raise ValueError("Invalid operator")

    result = True
    i = 0
    while i < len(expression):
        if expression[i] in ['T', 't']:
            result = True
        elif expression[i] in ['F', 'f']:
            result = False
        elif expression[i] == '&':
            i += 1
            a = (expression[i] == 'T') or (expression[i] == 't')
            i += 1
            b = (expression[i] == 'T') or (expression[i] == 't')
            result = boolean_operator('&', a, b)
        elif expression[i] == '|':
            i += 1
            a = (expression[i] == 'T') or (expression[i] == 't')
            i += 1
            b = (expression[i] == 'T') or (expression[i] == 't')
            result = boolean_operator('|', a, b)
        i += 1

    return result