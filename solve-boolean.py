Here is the solution:

def solve_boolean(input_str):
    if input_str == 'T':
        return True
    elif input_str == 'F':
        return False
    elif '&' in input_str:
        a, b = input_str.split('&')
        return solve_boolean(a) and solve_boolean(b)
    elif '|' in input_str:
        a, b = input_str.split('|')
        return solve_boolean(a) or solve_boolean(b)
    else:
        raise ValueError("Invalid input")