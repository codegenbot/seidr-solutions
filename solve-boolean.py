def solve_boolean(input):
    if input == 'T':
        return True
    elif input == 'F':
        return False
    elif '&' in input:
        left, right = input.split('&')
        return not (solve_boolean(left) and solve_boolean(right))
    elif '|' in input:
        left, right = input.split('|')
        return solve_boolean(left) or solve_boolean(right)