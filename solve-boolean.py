def solve_boolean(input):
    while '&' in input or '|' in input:
        if '&' in input:
            left, right = input.split('&', 1)
            input = str(solve_boolean(left) and solve_boolean(right))
        elif '|' in input:
            left, right = input.split('|', 1)
            input = str(solve_boolean(left) or solve_boolean(right))
    return eval(input)