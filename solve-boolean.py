```
def solve.Boolean(expression):
    def bool_func(a, b, op):
        if op == '|':
            return a or b
        else:
            return a and b

    result = True
    i = 0
    while i < len(expression):
        if expression[i] in ['T', 't']:
            result = True
        elif expression[i] in ['F', 'f']:
            result = False
        elif expression[i] == '&':
            j = i + 1
            while expression[j] != '&' and j < len(expression):
                j += 1
            op = '&' if expression[i:i+2] == ' &' else '&'
            a = bool_func(result, result == expression[j:], op)
            i = j
        elif expression[i] == '|':
            j = i + 1
            while expression[j] != '|' and j < len(expression):
                j += 1
            op = '|' if expression[i:i+2] == ' '| else '|'
            a = bool_func(result, result == expression[j:], op)
            i = j
        i += 1
    return result