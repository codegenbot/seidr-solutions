def solve_boolean(input_str):
    if input_str == 't':
        return True
    elif input_str == 'f':
        return False
    elif '&' in input_str:
        left, right = input_str.split('&')
        return not (bool(solve_boolean(left)) and bool(solve_boolean(right)))
    elif '|' in input_str:
        left, right = input_str.split('|')
        return bool(solve_boolean(left)) or bool(solve_boolean(right))
    else:
        raise ValueError("Invalid input")