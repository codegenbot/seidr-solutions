import re


def get_middle(s):
    # Check if the input string is well-formed and contains only allowed characters
    if not re.match(r"^[a-zA-Z0-9]*$", s):
        raise ValueError("Input string is not well-formed")
    # If the length of the input string is even, return the two middle characters as a string
    if len(s) % 2 == 0:
        return s[len(s) // 2 - 1 : len(s) // 2 + 2]
    # Otherwise, return the middle character as a string
    else:
        return s[len(s) // 2]