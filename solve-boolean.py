import re

def solve_boolean(expression):
    return eval(re.sub(r'(T|F)', lambda x: x.group(0).upper(), expression).replace("|", " or ").replace("&", " and "))

input_str = input().strip()
print(solve_boolean(input_str))