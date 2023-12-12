import re

def solve_boolean(expression):
    expression = re.sub(r'\b[Tt]\b', 'True', expression)
    expression = re.sub(r'\b[Ff]\b', 'False', expression)
    return eval(expression.replace('&', ' and ').replace('|', ' or '))