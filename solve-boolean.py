def solve_boolean(expression):
    return eval(expression.lower()
                          .replace("T", "True")
                          .replace("F", "False")
                          .replace("|", " or ")
                          .replace("&", " and "))

output = solve_boolean(input())
print(output)