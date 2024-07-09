def solve_boolean(expression):
    return eval(expression.replace("T", "true")
                          .replace("F", "false")
                          .replace("|", " or ")
                          .replace("&", " and "))

output = solve_boolean(input())
print(output)