def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str and '|' in input_str:
        left, op, right = input_str.split(op)
        return (op == '&') * (solve_boolean(left) and solve_boolean(right)) + (op == '|') * (solve_boolean(left) or solve_boolean(right))
    elif '&' in input_str:
        left, op, right = input_str.split('&')
        return solve_boolean(left) and solve_boolean(right)
    elif '|' in input_str:
        left, op, right = input_str.split('|')
        return solve_boolean(left) or solve_boolean(right)
    else:
        raise Exception('Invalid input')