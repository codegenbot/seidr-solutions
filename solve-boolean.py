def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"))


output = solve_boolean(input())
print(output)