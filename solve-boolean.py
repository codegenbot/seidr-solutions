import re


def solve_boolean(expression):
    result = re.match(r"^(?P<left>.*?)(\||\&)(?P<right>.*)$", expression)
    if result:
        left, right = result.groups()
        return solve_boolean(left) | solve_boolean(right)
    elif expression == "t":
        return True
    else:
        return False


# Read input from the user
expression = input("Enter a Boolean expression: ")
result = solve_boolean(expression)
print(f"The result is {result}")