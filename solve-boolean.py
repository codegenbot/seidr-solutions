expression = input().strip()

def solve_boolean(expression):
    return eval(expression.replace("T", "t").replace("F", "f").replace("|", " or ").replace("&", " and ").replace("t", "True").replace("f", "False"))

print(solve_boolean(expression))