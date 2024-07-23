```
def solve_boolean(input):
    while '&' in input or '|' in input:
        if '&' in input:
            left, right = input.split('&', 1)
            input = f"({str(solve_boolean(left))} & {str(solve_boolean(right))})"
        elif '|' in input:
            left, right = input.split('|', 1)
            input = f"({str(solve_boolean(left))} | {str(solve_boolean(right))})"

    return eval(input) if input.strip().lower() not in ['true', 't'] else True