def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif len(input_str) > 1 and input_str[0] in ['f', 't'] and input_str[1] in ['&', '|']:
        return solve_boolean(input_str[0]) and input_str[1] == '&' or solve_boolean(input_str[0]) or solve_boolean(input_str[1:])
    else:
        return all(input_str.split('&')) or any(input_str.split('|'))