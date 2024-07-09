def solve_boolean(expression):
    return eval(expression.replace("T", "'True'")
                          .replace("F", "'False'")
                          .replace("|", " or ")
                          .replace("&", " and "))

output = solve_boolean(input())
print(output)