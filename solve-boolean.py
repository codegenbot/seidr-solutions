def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str:
        left, right = input_str.split('&')
        return bool(left) and bool(right)
    elif '|' in input_str:
        left, right = input_str.split('|')
        return bool(left) or bool(right)
    else:
        raise Exception('Invalid Boolean expression')