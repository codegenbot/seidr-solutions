def solve_boolean(expression):
    return eval(expression.replace("T", "True").replace("F", "False"))


user_input = input().strip()
print(solve_boolean(user_input))