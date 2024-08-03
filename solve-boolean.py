def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif len(input_str) > 1 and input_str[0] in ['f', 't']:
        return solve_boolean(input_str[0]) and solve_boolean(input_str[1:])
    else:
        if '&' in input_str:
            a, b = map(solve_boolean, input_str.split('&'))
            return a and b
        elif '|' in input_str:
            a, b = map(solve_boolean, input_str.split('|'))
            return a or b