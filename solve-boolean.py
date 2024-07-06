import re


def solve_boolean(expression):
    # Add an input statement to read the expression from the user
    expression = input("Enter a Boolean expression: ")

    result = re.match(r"^(t|f)(\||\&)(t|f)$", expression)
    if result:
        left, right = result.groups()
        return solve_boolean(left) | solve_boolean(right)
    elif expression == "t":
        return True
    else:
        return False