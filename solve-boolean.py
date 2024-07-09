def solve_boolean(expression):
    if expression == "t":
        return True
    elif expression == "f":
        return False
    else:
        return False if "f" in expression else True


# Read input from user
expression = input()
result = solve_boolean(expression)
print(result)