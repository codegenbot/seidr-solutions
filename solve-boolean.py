def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str and '|' in input_str:
        raise ValueError('Invalid expression')
    else:
        operators = {'&': lambda x, y: x and y, '|': lambda x, y: x or y}
        output = eval(''.join(operators[op](x, y) for op, (x, y) in zip(*[input_str[i:i+2] for i in range(0, len(input_str), 2)])))
    return output