def solve_boolean(input):
    while '&' in input or '|' in input:
        if '&' in input:
            left, right = input.split('&', 1)
            input = str(eval(left) and eval(right))
        elif '|':
            left, right = input.split('|', 1)
            input = str(eval(left) or eval(right))
    return eval(input)