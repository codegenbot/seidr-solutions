def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str:
        a, b = map(solve_boolean, input_str.split('&'))
        return a and b
    elif '|' in input_str:
        a, b = map(solve_boolean, input_str.split('|'))
        return a or b