def solve_boolean(input_str):
    if input_str == 't':
        return True
    elif input_str == 'f':
        return False
    elif '&' in input_str:
        operands = input_str.split('&')
        return reduce(lambda x, y: x and eval(y), operands)
    elif '|' in input_str:
        operands = input_str.split('|')
        return reduce(lambda x, y: x or eval(y), operands)
    else:
        raise ValueError('Invalid Boolean expression')