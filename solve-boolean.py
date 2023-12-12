import re

def solve_boolean(expression):
    expression = re.sub(r'\bt\b', 'True', expression)
    expression = re.sub(r'\bf\b', 'False', expression)
    return eval(expression.replace('&', ' and ').replace('|', ' or '))