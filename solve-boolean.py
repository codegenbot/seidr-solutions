def solve_boolean(expression):
    expression = expression.upper()
    return eval(
        expression.replace("|", "or").replace("&", "and"), {"T": True, "F": False}
    )


input_str = input()
print(solve_boolean(input_str))