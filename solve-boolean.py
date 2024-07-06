import re


def solve_boolean(expression):
    # Use regular expressions to parse the expression and evaluate it
    result = re.match(r"^(?P<left>.*?)(\||\&)(?P<right>.*)$", expression)
    if result:
        left, right = result.groups()
        return solve_boolean(left) | solve_boolean(right)
    elif expression == "t":
        return True
    else:
        return False


# Prompt user for input and pass it to the function
user_input = input("Enter a Boolean expression: ")
solve_boolean(user_input)