expression = input().strip()

def solve_boolean(expression):
    return eval(expression.replace('f', 'False').replace('t', 'True'))

print(solve_boolean(expression))