import re

def solve_boolean(expression):
    return eval(re.sub(r'(?<![|&])T', 'True', re.sub(r'(?<![|&])F', 'False', expression)))