def solve_boolean(expression):
    expression = expression.replace("T", "True").replace("F", "False")
    stack = []
    for char in expression:
        if char == "|":
            stack.append(" or ")
        elif char == "&":
            stack.append(" and ")
        elif char != " ":
            stack.append(char)
    result = "".join(stack)
    return eval(result)


expression = input()
result = solve_boolean(expression)
print(result)