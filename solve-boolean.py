def solve_boolean(expression):
    def or_gate(a, b):
        return a or b

    def and_gate(a, b):
        return a and b

    ops = {'|': or_gate, '&': and_gate}

    result = True
    for char in expression:
        if char in ['T', 't']:
            result = char.upper() == 'T'
        elif char in ['F', 'f']:
            result = not (char.upper() == 'T')
        else:
            operand1 = result
            result = ops[char](result, char == '&')

    return result