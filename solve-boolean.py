def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif input_str[0] == '&':
        return solve_boolean(input_str[1:]) and solve_boolean(input_str[2:])
    elif input_str[0] == '|':
        return solve_boolean(input_str[1:]) or solve_boolean(input_str[2:])
    else:
        return None