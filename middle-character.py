import re


def get_middle(s):
    if not re.match(r"^[a-zA-Z0-9]*$", s):
        raise ValueError("Input string is not well-formed")
    if len(s) % 2 == 0:
        return s[len(s) // 2 - 1 : len(s) // 2 + 2]
    else:
        return s[len(s) // 2]