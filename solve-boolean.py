def solve_boolean(input):
    while '&' in input or '|' in input:
        if '&' in input:
            left, right = input.split('&', 1)
            input = str(eval(left.strip()) and eval(right.strip()))
        elif '|':
            left, right = input.split('|', 1)
            input = str(eval(left.strip()) or eval(right.strip()))
    return eval(input)