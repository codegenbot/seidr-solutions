def solve_boolean(input):
    if input == 'T':
        return True
    elif input == 'F':
        return False
    elif '&' in input and '|' in input:
        raise ValueError('Invalid expression')
    else:
        result = eval('True' + input)
        return result